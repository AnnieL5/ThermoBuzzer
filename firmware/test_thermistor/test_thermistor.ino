// const int BUZZERPIN = 8;
const int TEMPPIN = A0;
// const int buttonPin = 2;  // the number of the pushbutton pin

const int TEMP_ADJUST = -2; //Seems that sensor is always showing about 2 deg too high
// long currentMillis=0;
// long previousMillis=0; //make sure that we check temperature right at the beginning
// long currentMillis2=0;
// long timerStartT=0; 
// long tDronpt
int tempReading; //raw ADC temp reading from 0 to 1023
double tempK; //calculated temperature in degrees Kelvin

// int buttonPressed;
bool overTemp = false;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // pinMode(BUZZERPIN, OUTPUT);
  pinMode(TEMPPIN, INPUT);
  // pinMode(buttonPin, INPUT);
  // Serial.begin(9600);
  pinMode(13, OUTPUT);
}


float readTemperature()
{
tempReading = analogRead(TEMPPIN); //Raw reading from 0 to 1023
tempK = log(10000.0 * ((1024.0 / tempReading - 1))); //See datasheet for formula
tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK ); // Temp Kelvin
float celsius = tempK - 273.15 + TEMP_ADJUST; // Convert Kelvin to Celsius plus a TEMP_ADJUST
return celsius;
}


void loop() {
  // put your main code here, to run repeatedly:
  float tempC=readTemperature(); //read temp
  float time = tempC*tempC;
  digitalWrite(13, HIGH);   // Turn the LED on
  delay(time);              // Wait for a second
  digitalWrite(13, LOW);    // Turn the LED off
  delay(time);
}
