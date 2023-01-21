void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT); // led a
  pinMode(3, OUTPUT); // led b
  pinMode(4, OUTPUT); // led c
  pinMode(5, OUTPUT); // led d
  pinMode(6, OUTPUT); // led e
  pinMode(7, OUTPUT); // led f
  pinMode(8, OUTPUT); // led g

  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // This is for ex 4
  
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);

  // This will display 9
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, HIGH); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("9");
  delay(1500);

  // This will display 8
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, LOW); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("8");
  delay(1500);
  
  //This will display 7
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, HIGH); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, HIGH); // led f
  digitalWrite(8, HIGH); // led g
  Serial.println("7");
  delay(1500);

  //This will display 6
  digitalWrite(2, LOW); // led a
  digitalWrite(3, HIGH); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, LOW); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("6");
  delay(1500);

  //This will display 5
  digitalWrite(2, LOW); // led a
  digitalWrite(3, HIGH); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("5");
  delay(1500);

  //This will display 4
  digitalWrite(2, HIGH); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, HIGH); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("4");
  delay(1500);

  //This will display 3
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, HIGH); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("3");
  delay(1500);

  //This will display 2
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, HIGH); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, LOW); // led e
  digitalWrite(7, HIGH); // led f
  digitalWrite(8, LOW); // led g
  Serial.println("2");
  delay(1500);

  //This will display 1
  digitalWrite(2, HIGH); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, HIGH); // led d
  digitalWrite(6, HIGH); // led e
  digitalWrite(7, HIGH); // led f
  digitalWrite(8, HIGH); // led g
  Serial.println("1");
  delay(1500);

  //This will display 0
  digitalWrite(2, LOW); // led a
  digitalWrite(3, LOW); // led b
  digitalWrite(4, LOW); // led c
  digitalWrite(5, LOW); // led d
  digitalWrite(6, LOW); // led e
  digitalWrite(7, LOW); // led f
  digitalWrite(8, HIGH); // led g
  Serial.println("0");
  delay(1500);

}
