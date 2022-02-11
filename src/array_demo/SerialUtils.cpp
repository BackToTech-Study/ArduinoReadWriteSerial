#include "SerialUtils.h"

String getUserInput() {
  String userInput = String();
  char newData;

  do {
    while(0 >= Serial.available()) {
      delay(UserInputDelay);    
    }
  
    newData = Serial.read();

    if (newData != CommandTerminator)
      userInput.concat(newData);
    
    if (userInput.length() >= MaxUserInputLength)
      userInput.remove(0,1);
    
  } while(newData != CommandTerminator);
  
  return userInput;
}
