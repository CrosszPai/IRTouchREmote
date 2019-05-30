#include <Arduino.h>
#include <IRremote.h>

IRsend irsend;

void setup()
{
  for (int i = 6; i < 10; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  Serial.begin(9600);
}

void loop()
{
  if (!digitalRead(6))
  {

    for (int i = 0; i < 3; i++) {
		irsend.sendSony(0xa90, 12);
		delay(40);
	}

    Serial.println("Thick: 0xFF6897:6");
  }
  if (!digitalRead(7))
  {

    for (int i = 0; i < 3; i++) {
		irsend.sendSony(0xa91, 12);
		delay(40);
	}
    Serial.println("Thick: 0xFF30CF:7");
  }
  if (!digitalRead(8))
  {

    for (int i = 0; i < 3; i++) {
		irsend.sendSony(0xa92, 12);
		delay(40);
	}
    Serial.println("Thick: 0xFF18E7:8");
  }
  if (!digitalRead(9))
  {
    for (int i = 0; i < 3; i++) {
		irsend.sendSony(0xa93, 12);
		delay(40);
	}
    Serial.println("Thick:  0xFF7A85:9");
  }
  delay(100);
}