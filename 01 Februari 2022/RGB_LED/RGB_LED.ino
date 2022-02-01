#define redLed 11
#define grnLed 10
#define bluLed 9

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(grnLed, OUTPUT);
  pinMode(bluLed, OUTPUT);
}

void loop() {
  /*
    digitalWrite(redLed, HIGH);
    digitalWrite(grnLed, LOW);
    digitalWrite(bluLed, LOW);
    delay(1000);

    digitalWrite(redLed, LOW);
    digitalWrite(grnLed, HIGH);                 KODE RGB DARI LED, DENGAN DATA DIGITAL
    digitalWrite(bluLed, LOW);
    delay(1000);

    digitalWrite(redLed, LOW);
    digitalWrite(grnLed, LOW);
    digitalWrite(bluLed, HIGH);
    delay(1000);
  */

  analogWrite(redLed, random(255));
  analogWrite(grnLed, random(255));
  analogWrite(bluLed, random(255));
  delay(1000);
}
