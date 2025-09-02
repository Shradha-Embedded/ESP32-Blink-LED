// ============================================================================
// ESP32 LED Blink - Non-blocking using millis()
// This sketch blinks an LED without using delay() so CPU can multitask
// Demonstrates time-based control and non-blocking programming
// ============================================================================

const int ledPin = 23;                // Define LED pin
unsigned long previousMillis = 0;     // Store last time LED was updated
const unsigned long interval = 1000;  // Interval at which to blink (ms)
bool ledState = false;                // Current LED state

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis(); // Get current time

  // Check if interval has passed
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;   // Save time of this change
    ledState = !ledState;             // Toggle state
    digitalWrite(ledPin, ledState ? HIGH : LOW);
  }

  // Other tasks can run here without being blocked
}
