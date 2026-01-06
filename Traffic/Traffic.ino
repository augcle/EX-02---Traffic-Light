#define RPIN 11
#define YPIN 12
#define GPIN 13
#define Stime 1000
#define Ltime 1500

void setup() {
  // put your setup code here, to run once:
  char state;

  Serial.begin(115200);

  pinMode(RPIN, OUTPUT);
  pinMode(YPIN, OUTPUT);
  pinMode(GPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RPIN, LOW);
  digitalWrite(YPIN, LOW);
  digitalWrite(GPIN, LOW);

  // Rød
  digitalWrite(RPIN, HIGH);
  Serial.println("STOP");
  delay(Stime*2);

  // Rød og Gul
  digitalWrite(YPIN, HIGH);
  Serial.println("READY");
  delay(Stime);

  // Grønt signal
  digitalWrite(RPIN, LOW);
  digitalWrite(YPIN, LOW);
  digitalWrite(GPIN, HIGH);
  Serial.println("GO");
  delay(Stime*2);

  // Gul
  digitalWrite(GPIN, LOW);
  digitalWrite(YPIN, HIGH);
  Serial.println("SLOW DOWN");
  delay(Stime);

}
