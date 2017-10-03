/*
  ESP8266_Libary.h - Library for doorlock system.
  Created by Kenn Huang, September, 6, 2017.
*/
#ifndef ESP8266_Libary_h
#define ESP8266_Libary_h

#include "Arduino.h"
#include <SoftwareSerial.h>

class ESP8266
{
  public:
    ESP8266(uint8_t pin_tx, uint8_t pin_rx, uint8_t baud);
    void init();

  private:
    uint8_t receivePin;
    uint8_t transmitPin;
    uint8_t baudrate;
    unsigned long timeout_start_val;
    SoftwareSerial * esp;
};

#endif
