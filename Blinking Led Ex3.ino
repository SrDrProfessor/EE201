void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000); 

  if (digitalRead(7) == HIGH) {
    Serial.println("Hello World");
  } else if (digitalRead(7) == LOW) {
    Serial.println("2023");
  }

}
