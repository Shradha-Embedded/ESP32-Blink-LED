// ============================================================================
// ESP32 LED Blink - Original (Delay-based)
// This sketch blinks an LED connected to GPIO 23 with 1 second ON/OFF intervals
// Demonstrates basic GPIO output and use of delay() function
// ============================================================================

const int ledPin = 23;  // Define LED pin

void setup() {
  // Configure the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED ON
  delay(1000);                 // Wait 1 second
  digitalWrite(ledPin, LOW);   // Turn LED OFF
  delay(1000);                 // Wait 1 second
}
