void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  // 9
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  delay(1500);
  // 8
  digitalWrite(7, LOW);
  delay(1500);
  // 7
  digitalWrite(13, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  // 6
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  delay(1500);
  // 5
  digitalWrite(7, HIGH);
  delay(1500);
  // 4
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  // 3
  digitalWrite(12, LOW);
  digitalWrite(6, LOW);
  digitalWrite(13, HIGH);
  delay(1500);
  // 2
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(1500);
  // 1
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  // 0
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);
}
