#include "Ultrasonic.h"
using namespace std;

Ultrasonic::Ultrasonic(){

}

void Ultrasonic::Initialize(short PingPin, short EchoPin)
{
    pingPin = PingPin;
    echoPin = EchoPin;
    pinMode(pingPin, OUTPUT);
}

long Ultrasonic::Duration_ms()
{
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(pingPin, LOW);
    pinMode(echoPin, INPUT);
    long duration_ms = pulseIn(echoPin, HIGH);
    delay(1);
    return duration_ms;
}

long Ultrasonic::Range_Inches()
{
    return Duration_ms() / 74 / 2;
}

long Ultrasonic::Range_CM()
{
    return Duration_ms() / 29 / 2;
}