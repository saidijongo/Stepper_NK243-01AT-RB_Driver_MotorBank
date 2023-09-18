const int dirPin = 5;
const int stepPin = 6;
const int en = 7;
const int spr = 1500; //Steps per Revolution

void setup()
{
	// Declare pins as Outputs
	pinMode(stepPin, OUTPUT);
	pinMode(dirPin, OUTPUT);
}
void loop()
{
	digitalWrite(dirPin, HIGH);

	for(int x = 0; x < spr; x++)
	{
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(500);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(500);
	}
	delay(1000);
	
	digitalWrite(dirPin, LOW);

	for(int x = 0; x < spr; x++)
	{
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(200);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(200);
	}
	delay(1000);
}
