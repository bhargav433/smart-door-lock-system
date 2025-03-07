#define RELAY_PIN 5 // Define GPIO pin connected to the relay (D1)

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  
  // Set the relay pin as an output pin
  pinMode(RELAY_PIN, OUTPUT);
  
  // Initially set relay to OFF (locked)
  digitalWrite(RELAY_PIN, LOW);  // LOW turns OFF the relay (locked state)
  
  Serial.println("Relay Control Program");
  Serial.println("Send '0' to turn OFF the relay (Lock)");
  Serial.println("Send '1' to turn ON the relay (Unlock)");
}

void loop() {
  // Check if data is available in the Serial Monitor
  if (Serial.available() > 0) {
    // Read the data from the Serial Monitor
    char input = Serial.read();
    
    // If input is '0', turn OFF the relay (lock)
    if (input == '0') {
      digitalWrite(RELAY_PIN, LOW);  // LOW turns OFF the relay
      Serial.println("Relay is OFF (Locked)");
    }
    // If input is '1', turn ON the relay (unlock)
    else if (input == '1') {
      digitalWrite(RELAY_PIN, HIGH);  // HIGH turns ON the relay
      Serial.println("Relay is ON (Unlocked)");
    }
    // If the input is neither '0' nor '1', print an error message
    else {
      Serial.println("Invalid input! Please send '0' to turn OFF the relay (Lock) or '1' to turn ON the relay (Unlock).");
    }
  }
}
