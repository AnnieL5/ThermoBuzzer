
const int BUZZERPIN = 8;
const int TEMPPIN = A0;
const int buttonPin = 2;  // the number of the pushbutton pin

const int TEMP_ADJUST = -2; //Seems that sensor is always showing about 2 deg too high
long currentMillis=0;
long previousMillis=0; //make sure that we check temperature right at the beginning
long currentMillis2=0;
long timerStartT=0; 
long tDronpt
int tempReading; //raw ADC temp reading from 0 to 1023
double tempK; //calculated temperature in degrees Kelvin

int buttonPressed;
bool overTemp = false;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BUZZERPIN, OUTPUT);
  pinMode(TEMPPIN, INPUT);
  pinMode(buttonPin, INPUT);
}

void updateTemp()
{
  
  currentMillis=millis();
  if ((currentMillis-previousMillis)>=1000) //Update every 5 seconds
  {
    float tempC=readTemperature(); //read temp
    if(tempC > 28)
    {
      // buzz();
      if(!overTemp){
        overTemp = true;
        timerStartT = millis();
      }
      currentMillis2 = millis();
      if ((currentMillis2-timerStartT)>=2000) //Update every 10 seconds
      {
        // buzz();
        buttonPressed = digitalRead(buttonPin);
        while (buttonPressed == LOW){
          buzz();
          buttonPressed = digitalRead(buttonPin);
        }
        timerStartT = millis();
      }
    }else{

    }
    previousMillis = millis();
  }
  
}

float readTemperature()
{
tempReading = analogRead(TEMPPIN); //Raw reading from 0 to 1023
tempK = log(10000.0 * ((1024.0 / tempReading - 1))); //See datasheet for formula
tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK ); // Temp Kelvin
float celsius = tempK - 273.15 + TEMP_ADJUST; // Convert Kelvin to Celsius plus a TEMP_ADJUST
return celsius;
}

void buzz()
{
  digitalWrite(BUZZERPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(BUZZERPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000); 
}

// the loop function runs over and over again forever
void loop() {
  updateTemp();                     // wait for a second
}
