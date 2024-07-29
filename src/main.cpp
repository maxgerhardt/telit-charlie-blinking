#include <Arduino.h>

#define LED LED_BUILTIN

void setup() {
    Serial.begin(115200);
    pinMode(LED, OUTPUT);
}

void loop() {
    Serial.println("Blink!");
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}