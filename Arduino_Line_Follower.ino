const int irleft = 2;
const int irright = 3;
const int motorl1 = 4;
const int motorl2 = 5;
const int motorr1 = 6;
const int motorr2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(irleft, INPUT);
  pinMode(irright, INPUT);
  pinMode(motorl1, OUTPUT);
  pinMode(motorl2, OUTPUT);
  pinMode(motorr1, OUTPUT);
  pinMode(motorr2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int stl = digitalRead(irleft);
  int str = digitalRead(irright);
  if (stl == 1 && str == 0){
    digitalWrite(motorl1, HIGH);
    digitalWrite(motorl2,LOW);
    digitalWrite(motorr2, HIGH);
    digitalWrite(motorr1,LOW);
  } else if (stl == 0 && str == 1){
    digitalWrite(motorr1, HIGH);
    digitalWrite(motorr2,LOW);
    digitalWrite(motorl2, HIGH);
    digitalWrite(motorl1,LOW);
  }
  else{
    digitalWrite(motorr1, HIGH);
    digitalWrite(motorr2,LOW);
    digitalWrite(motorl1, HIGH);
    digitalWrite(motorl2,LOW);
  }

}
