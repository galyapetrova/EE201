void setup() {
  // put your setup code here, to run once:
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // if pin reads HIGH then it prints hello world
  // if pin reads LOW then it prints it's 2023
  if(digitalRead(11)) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}
