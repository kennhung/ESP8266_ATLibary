/*
  ESP8266_Libary.cpp - Library for doorlock system.
  Created by Kenn Huang, September, 6, 2017.
*/

#include "Arduino.h"
#include "ESP8266_Libary.h"
#include <SoftwareSerial.h>

ESP8266::ESP8266(uint8_t pin_tx, uint8_t pin_rx, uint8_t baud){
	receivePin = pin_rx;
	transmitPin = pin_tx;
	baudrate = baud;
	pinMode(receivePin, INPUT);
	pinMode(transmitPin, OUTPUT);

	SoftwareSerial softserial(receivePin,transmitPin);//rx, tx

	esp = &softserial;
	esp->begin(baudrate);
	esp->listen();//not needed unless using other software serial instances
	delay(3000);//delay before kicking things off
}

void ESP8266::init(){
	esp->print("AT\r\n");
}
