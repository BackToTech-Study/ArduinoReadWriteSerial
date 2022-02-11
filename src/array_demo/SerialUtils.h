#ifndef SerialUtils_h
#define SerialUtils_h

#include <Arduino.h>

const int SerialSpeed = 9600;
const long SerialReadTimeout = 360000;
const char CommandTerminator = '\n'; 
const int UserInputDelay = 20;
const int MaxUserInputLength = 255;

String getUserInput();

#endif
