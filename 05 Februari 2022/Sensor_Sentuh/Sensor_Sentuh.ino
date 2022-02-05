int sensorSentuh = 8;

void setup() {
  pinMode(sensorSentuh, INPUT);
  Serial.begin(9600);
}

void loop() {
  int dataSensor = digitalRead(sensorSentuh);
  Serial.print("Switch : ");
  Serial.println(dataSensor);
  delay(500);
}
