#define RPIN 11
#define YPIN 12
#define GPIN 13

void setup() {
  pinMode(RPIN, OUTPUT);
  pinMode(YPIN, OUTPUT);
  pinMode(GPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<8; i++) {
    switch (i) {
     case 0:
      digitalWrite(RPIN, LOW);
      digitalWrite(YPIN, LOW);
      digitalWrite(GPIN, LOW);
      delay(1000);
      break;
    case 1:
      digitalWrite(RPIN, LOW);
      digitalWrite(YPIN, LOW);
      digitalWrite(GPIN, HIGH);
      delay(1000);
      break;
    case 2:
      digitalWrite(RPIN, LOW);
      digitalWrite(YPIN, HIGH);
      digitalWrite(GPIN, LOW);
      delay(1000);
      break;
    case 3:
      digitalWrite(RPIN, LOW);
      digitalWrite(YPIN, HIGH);
      digitalWrite(GPIN, HIGH);
      delay(1000);
      break;
    case 4:
      digitalWrite(RPIN, HIGH);
      digitalWrite(YPIN, LOW);
      digitalWrite(GPIN, LOW);
      delay(1000);
      break;
    case 5:
      digitalWrite(RPIN, HIGH);
      digitalWrite(YPIN, LOW);
      digitalWrite(GPIN, HIGH);
      delay(1000);
      break;
    case 6:
      digitalWrite(RPIN, HIGH);
      digitalWrite(YPIN, HIGH);
      digitalWrite(GPIN, LOW);
      delay(1000);
      break;
    case 7:
      digitalWrite(RPIN, HIGH);
      digitalWrite(YPIN, HIGH);
      digitalWrite(GPIN, HIGH);
      delay(1000);
      break;
    }
  }
}
