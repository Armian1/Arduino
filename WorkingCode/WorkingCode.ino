
const int switchPin1 = 2;
const int switchPin2 = 3;
const int switchPin3 = 4;
const int switchPin4 = 5;
const int buttonPin = 6;
const int rearEngineON = 9;
const int rearEngineD = 10;
const int frontEngineON = 11;
const int frontEngineD = 12;
int switch1State = 0;
int switch2State = 0;
int switch3State = 0;
int switch4State = 0;
int buttonState = 0;

void forward()
{
  digitalWrite(rearEngineON, HIGH);
  }
void backward()
{
 digitalWrite(rearEngineON, HIGH);
 digitalWrite(rearEngineD, HIGH);
}
void left()
{
  digitalWrite(frontEngineON, HIGH);
  digitalWrite(frontEngineD, HIGH);
}
void right()
{
  digitalWrite(frontEngineON, HIGH);
}
void stopFront()
{
  digitalWrite(frontEngineON,LOW);
  digitalWrite(frontEngineD, LOW);
}
void stopRear()
{
  digitalWrite(rearEngineON,LOW);
  digitalWrite(rearEngineD, LOW);
}

void setup() {
   pinMode(buttonPin, INPUT);
   pinMode(switchPin1, INPUT); 
   pinMode(switchPin2, INPUT);
   pinMode(switchPin3, INPUT);
   pinMode(switchPin4, INPUT); 
   pinMode(rearEngineON, OUTPUT); 
   pinMode(rearEngineD, OUTPUT);
   pinMode(frontEngineON, OUTPUT);
   pinMode(frontEngineD, OUTPUT);    
}
 

void loop() {
 
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  switch1State = digitalRead(switchPin1);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (switch1State == HIGH) {
    forward();
  }else{
    stopRear();
  }
  
 
}


