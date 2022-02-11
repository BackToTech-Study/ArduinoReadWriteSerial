#include "MainMenu.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(SerialSpeed);
  Serial.setTimeout(SerialReadTimeout);
}

void loop() {
  // put your main code here, to run repeatedly:
  int selectedOptionIndex = getMainMenuSelection();
  Serial.print("You selected option: ");
  showOption(selectedOptionIndex);
}


