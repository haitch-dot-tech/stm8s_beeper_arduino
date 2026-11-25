#include <Arduino.h>
#include <beeper.h>

void setup()
{
}

void loop()
{
	beeper_on(1000);
	delay(1000);
	beeper_on(2000);
	delay(1000);
	beeper_on(4000);
	delay(1000);
}
