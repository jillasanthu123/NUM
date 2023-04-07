int a;
int b;
int c;

void setup() {
  pinMode(11,OUTPUT)
  pinMode(12,OUTPUT)
  pinMode(10,OUTPUT)
  Serial.begin(9600);

  Serial.println("1");
  Serial.println("2");
  Serial.println("3");
}

void loop() {
  Serial.println("Which light do you want to glow? ");

  while (Serial.available() == 0) {
  }

  int menuChoice = Serial.parseInt();

  switch (menuChoice) {
    case 1:
        digitalWrite(12,HIGH);
        digitalWrite(12,LOW);
      break;

    case 2:
        digitalWrite(11,HIGH);
        digitalWrite(11,LOW);
      break;

    case 3:
        digitalWrite(10,HIGH);
        digitalWrite(10,LOW);
      break;

    default:
      Serial.println("Please choose a valid selection");
  }
}
