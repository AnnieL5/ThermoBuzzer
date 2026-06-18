
const int buttonPin = 2;  // the number of the pushbutton pin


int buttonPressed;
bool overTemp = false;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(buttonPin, INPUT);
  pinMode(13, OUTPUT);
}





// the loop function runs over and over again forever
void loop() {
  buttonPressed = digitalRead(buttonPin);
  if (buttonPressed == LOW){
    digitalWrite(13, HIGH);   // Turn the LED on
    delay(500);              // Wait for a second
    }    
  digitalWrite(13, LOW);    // Turn the LED off
  delay(500);                 // wait for a second
}
