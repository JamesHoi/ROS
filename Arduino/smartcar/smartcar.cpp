#include "Arduino.h"
#include "D://Workspace//ROS//Arduino//libraries//Sensor//Ultrasonic.h"
#include "D://Workspace//ROS//Arduino//smartcar/Config.h"

Ultrasonic ultrasonic;
void setup()
{
    Serial.begin(115200);
    ultrasonic.Initialize(pingPin, echoPin);
}

void loop()
{
    Serial.println(ultrasonic.Range_CM());
}
