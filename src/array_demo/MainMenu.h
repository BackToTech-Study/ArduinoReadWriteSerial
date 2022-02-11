#ifndef MainMenu_h
#define MainMenu_h

#include "SerialUtils.h"

int getMainMenuSelection();
void showMenuOptions();
void showOption(int);
int getOptionIndex(String);
void showInvalidOptionMessage(String);

#endif