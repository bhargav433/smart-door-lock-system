#define RELAY_PIN 5 // Define GPIO pin connected to the relay (D1)

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  
  // Set the relay pin as an output pin
  pinMode(RELAY_PIN, OUTPUT);
  
  // Initially turn off the relay (lock the door)
  digitalWrite(RELAY_PIN, LOW); // LOW turns off the relay
  Serial.println("Relay is OFF");
}

void loop() {
  // Turn the relay ON (unlock the door)
  digitalWrite(RELAY_PIN, HIGH); // HIGH turns on the relay
  Serial.println("Relay is ON (Unlocked)");
  
  delay(5000); // Wait for 5 seconds
  
  // Turn the relay OFF (lock the door)
  digitalWrite(RELAY_PIN, LOW); // LOW turns off the relay
  Serial.println("Relay is OFF (Locked)");
  
  delay(5000); // Wait for 5 seconds before repeating
}
