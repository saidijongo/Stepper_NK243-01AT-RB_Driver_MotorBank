#define EN    2
#define STEP  3
#define DIR   4

bool dir = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(EN, OUTPUT);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);

  digitalWrite(EN, LOW); // enable the stepper motor
  digitalWrite(DIR, dir); // set direction to CCW
}

void loop() {
  for (int i = 0; i < 3600; i++) {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(10); // to ensure driver reads pulse

    digitalWrite(STEP, LOW);
    delayMicroseconds(350); // delay before next step
  }
  dir = !dir; // change spin direction
  digitalWrite(DIR, dir); // set direction
//  delay(800);
}
