#include <USB.h>
#include <USBHIDKeyboard.h>

USBHIDKeyboard Keyboard;

char keys[] = {'w', 's', 'a', 'd', ' '};
int totalKeys = 5;

void setup() {
  USB.begin();
  Keyboard.begin();

  randomSeed(analogRead(0));
}

void loop() {
  int randomIdx = random(0, totalKeys);
  char selectedKey = keys[randomIdx];

  Keyboard.press(selectedKey);
  delay(random(150, 400));
  Keyboard.releaseAll();

  if (selectedKey == ' ') {
    delay(500);
  }

  long randomDelay = random(5500, 6500);
  delay(randomDelay);
}