int d7 =7;
int d8 =8;

void setup() {
 pinMode(d7,INPUT_PULLUP);
 pinMode(d8,INPUT_PULLUP);
 
Serial.begin(9600);
}

void loop() {
  int X = analogRead(A1);
  int Y = analogRead(A0);
  int x = map(X, 1, 1023, 1917, 2);
  int y = map(Y, 1, 1023, 2, 1077);
  

if(digitalRead(d8)==LOW){
Serial.print("c");

}else{
  Serial.print("z");
}
Serial.print(" ");
Serial.print(x);
Serial.print(" ");
Serial.print(y);
Serial.print(" ");
Serial.println("m");
delay(180);
}
