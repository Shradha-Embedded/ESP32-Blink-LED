// ============================================================================
// ESP32 LED Fade - PWM brightness control using LEDC
// This sketch gradually fades LED brightness up and down
// Demonstrates ESP32 hardware PWM (LEDC module)
// ============================================================================

const int ledPin = 23;      // Define LED pin
const int pwmChannel = 0;   // Select PWM channel (0-15 available)
const int freq = 5000;      // PWM frequency (Hz)
const int resolution = 8;   // 8-bit resolution (duty cycle 0-255)

void setup() {
  // Configure PWM channel
  ledcSetup(pwmChannel, freq, resolution);
  // Attach PWM channel to the LED pin
  ledcAttachPin(ledPin, pwmChannel);
}

void loop() {
  // Fade up
  for (int duty = 0; duty <= 255; duty++) {
    ledcWrite(pwmChannel, duty);  // Set duty cycle
    delay(5);
  }
  // Fade down
  for (int duty = 255; duty >= 0; duty--) {
    ledcWrite(pwmChannel, duty);
    delay(5);
  }
}
