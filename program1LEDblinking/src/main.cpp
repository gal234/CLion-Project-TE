#include <Arduino.h>

constexpr int LED_GREEN = 13, LED_RED = 12, LED_YELLOW = 14;

void setup() {
// write your initialization code here
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);

}

void loop() {
    // write your code here

    digitalWrite(LED_GREEN, HIGH);
    delay(5000);
    digitalWrite(LED_GREEN, LOW);
    delay(50);
    digitalWrite(LED_YELLOW, HIGH);
    delay(2000);
    digitalWrite(LED_YELLOW, LOW);
    delay(50);
    digitalWrite(LED_RED, HIGH);
    delay(5000);
    digitalWrite(LED_RED, LOW);
    delay(50);
    digitalWrite(LED_YELLOW, HIGH);
    delay(2000);
    digitalWrite(LED_YELLOW, LOW);
    delay(50);


}
