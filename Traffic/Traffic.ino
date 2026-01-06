// This is used to define a shorthand for our pins and times. RPIN = Red Pin.
#define RPIN 11
#define YPIN 12
#define GPIN 13
#define Stime 1000
#define Ltime 1500

void setup() {
  Serial.begin(115200); // Used for communication

  // We enable the pins as output.
  pinMode(RPIN, OUTPUT);
  pinMode(YPIN, OUTPUT);
  pinMode(GPIN, OUTPUT);
}

void loop() {
  // Set all pins to low
  digitalWrite(RPIN, LOW);
  digitalWrite(YPIN, LOW);
  digitalWrite(GPIN, LOW);

  // Red light
  digitalWrite(RPIN, HIGH);
  Serial.println("STOP");
  delay(Stime*2);

  // Red and yellow
  digitalWrite(YPIN, HIGH);
  Serial.println("READY");
  delay(Stime);

  // Green light
  digitalWrite(RPIN, LOW);
  digitalWrite(YPIN, LOW);
  digitalWrite(GPIN, HIGH);
  Serial.println("GO");
  delay(Stime*2);

  // Yellow light
  digitalWrite(GPIN, LOW);
  digitalWrite(YPIN, HIGH);
  Serial.println("SLOW DOWN");
  delay(Stime);

}
