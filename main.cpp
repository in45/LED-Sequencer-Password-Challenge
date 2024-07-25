// Define the LED pins
const int ledPins[] = {2, 3, 4, 5}; // Pins for LEDs
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// Define the button pin
const int buttonPin = 6; // Pin for the button

// Define the correct password (as decimal values for simplicity)
const int correctPassword[] = {1, 0, 3, 2}; // Example password sequence
const int passwordLength = sizeof(correctPassword) / sizeof(correctPassword[0]);

int inputIndex = 0; // Track the index of the current input
bool buttonState = false; // Track the state of the button

void setup() {
  // Initialize LED pins
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Turn off LEDs initially
  }
  
  // Initialize button pin
  pinMode(buttonPin, INPUT);
  
  Serial.begin(9600); // For debugging
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    // Check if the input matches the correct password
    if (inputIndex < passwordLength) {
      int currentInput = inputIndex; // Example way to simulate input (adjust as needed)
      
      if (currentInput == correctPassword[inputIndex]) {
        // Correct input, turn on the corresponding LED
        digitalWrite(ledPins[inputIndex], HIGH);
        Serial.println("Correct input! LED ON.");
        inputIndex++;
        
        if (inputIndex >= passwordLength) {
          Serial.println("Password complete! All LEDs are ON.");
          delay(5000); // Keep LEDs on for 5 seconds
          resetChallenge(); // Reset the challenge
        }
      } else {
        Serial.println("Incorrect input! Try again.");
        resetChallenge(); // Reset the challenge on wrong input
      }
      
      delay(1000); // Debounce delay
    }
  }
}

void resetChallenge() {
  // Turn off all LEDs
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  inputIndex = 0; // Reset input index
}
