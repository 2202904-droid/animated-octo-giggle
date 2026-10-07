const int LED_0 = 13;
const int BUTTON_0 = 12;
int pot = 0;
void setup() {
  pinMode(LED_0, OUTPUT);
  pinMode(BUTTON_0, INPUT);
  pinMode(A5, INPUT);
  pinMode(9, OUTPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(12)){
  pot = analogRead(A5);
  analogWrite(9, map(pot, 0, 1023, 0, 255));
  Serial.println(pot);
  } else {
    analogWrite(9, 0);
  };
  delay(10);
}
