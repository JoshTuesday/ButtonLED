void setup() {   
  // initialize D2 as Input port with internal pull-up resistor enabled.             
  pinMode(2, INPUT_PULLUP); 
  // initialize D5 as Output port.
  pinMode(5, OUTPUT);       
}

void loop() {
  int sensorValue = digitalRead(2);
  if(sensorValue)
{
  digitalWrite(5, LOW);   // turn the LED off
}
  else
  digitalWrite(5, HIGH);    // turn the LED on
}