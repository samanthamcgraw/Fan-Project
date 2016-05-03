void setup() {
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
int potPin = A0, potVal;

  potVal = analogRead( potPin );
  Serial.println (potVal );

  if (potVal > 500)
  {
    digitalWrite(13, HIGH);
  }
  else 
  {
    digitalWrite(13, LOW);
  }
int value = analogRead(A0);
Serial.println(value);
}
