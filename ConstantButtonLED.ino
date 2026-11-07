const int buttonPin = 2;
const int ledPin = 5;

bool ledState = LOW;         // Remembers if the LED is ON or OFF
bool lastButtonState = HIGH; // Remembers the button's state from the last loop

void setup() {   
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);      
}

void loop() {
  int currentButtonState = digitalRead(buttonPin);

  // Check if the button was just pressed (transition from HIGH to LOW)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    // Flip the LED state (if it was LOW, make it HIGH; if HIGH, make it LOW)
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    
    delay(50); // Small delay to prevent button bouncing interference
  }

  // Save the current button state for the next loop iteration
  lastButtonState = currentButtonState;
}