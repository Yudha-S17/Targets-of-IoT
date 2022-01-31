#define PIN_DIGITAL 8
#define PIN_ANALOG A5

void setup() {
  pinMode(PIN_DIGITAL, INPUT);
  pinMode(PIN_ANALOG,  INPUT);
  Serial.begin(9600);
}

void loop(){
   int dataDigital = digitalRead(PIN_DIGITAL);
   int dataAnalog  = analogRead(PIN_ANALOG);

   Serial.print("Data Digital : ");
   Serial.println(dataDigital);
   Serial.print("Data Analog  : ");
   Serial.println(dataAnalog);
   Serial.println("");
   delay(500);
}
