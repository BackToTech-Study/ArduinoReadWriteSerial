#include "MainMenu.h"

const int MenuSize = 6;
String OperationCode[6] = {"1", "2", "3", "4", "5", "6"};
String OperationText[6] = {
  "Create array", 
  "Add value to array", 
  "Add value at position x", 
  "Show array", 
  "Show value from position x", 
  "Read address of position x"};
const int InvalidOptionIndex = -1;

int getMainMenuSelection() {
  int selectedOptionIndex = InvalidOptionIndex;
  
  do {
    showMenuOptions();
    String userInput = getSelectedOption();
    
    selectedOptionIndex = getOptionIndex(userInput);
    if(selectedOptionIndex == InvalidOptionIndex)
      showInvalidOptionMessage(userInput);
    
    delay(UserInputDelay);
    
  } while(selectedOptionIndex < 0);
  
  return selectedOptionIndex;
}

void showMenuOptions() {
  for(int i=0; i<MenuSize; i++) {
    showOption(i);
  }
}

void showOption(int index) {
    Serial.print(OperationCode[index]);
    Serial.print(" - ");
    Serial.println(OperationText[index]);  
}

int getOptionIndex(String option) {
  for(int i=0; i<MenuSize; i++) {
    if (option == OperationCode[i])
      return i;
  }
  return -1;
}

void showInvalidOptionMessage(String userInput) {
  Serial.print("Invalid option: ");
  Serial.println(userInput);
}
