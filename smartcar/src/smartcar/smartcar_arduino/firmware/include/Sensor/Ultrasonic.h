//#include "Sensor.h"
#include<Arduino.h>
class Ultrasonic{ 
public:
    Ultrasonic();
    void Initialize(short PingPin,short EchoPin);
    long Duration_ms();
    long Range_Inches();
    long Range_CM();

private:
    short pingPin;
    short echoPin;
};
