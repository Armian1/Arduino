// Test Button.
const int buttonPin = 2;
// Controls the rear engine direction.
const int rearEngineD = 13;
// Turns on rear engine
const int rearEngineON = 12;
// Button value
int buttonState = 0;


void setup() {
  // Sets rearEngineD as output.
 pinMode(rearEngineD, OUTPUT);
  // Sets rearEngineON as output.
 pinMode(rearEngineON, OUTPUT);
  // Sets buttonPin as INPUT.
 pinMode(buttonPin, INPUT); 
}

void loop() {
   // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turns rear engine on:
    digitalWrite(rearEngineON, HIGH);
    digitalWrite(rearEngineD, HIGH);
  }else{
    // turn rear engine off:
    digitalWrite(rearEngineON, LOW);
    digitalWrite(rearEngineD, LOW);
  }
}
