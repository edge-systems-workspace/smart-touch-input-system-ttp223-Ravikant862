#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.



 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)
 int touch_Pin=12;

 // TODO 2:
 // Create variable to store touch state
int led_Pin=13;

void setup() {

    // TODO 3:
    Serial.begin(9600);
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure touch pin as INPUT
    pinMode(touch_Pin,INPUT);

    // TODO 5:
    pinMode(led_Pin,OUTPUT);
    // Print system initialization message
}


