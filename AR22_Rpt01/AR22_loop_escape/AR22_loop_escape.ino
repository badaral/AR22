int number = 0;
String stringValue[]={"Binary:", "Hexadecimal:"};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Number = ");
  Serial.print(number);
  Serial.print(", ");
  Serial.print(stringValue[0]);
  Serial.print(number,BIN);
  Serial.print(", ");
  Serial.print(stringValue[1]);
  Serial.print(number,HEX);
  Serial.println();
  number++;

  if(number > 15){
  Serial.print("Mission completed!");
  delay(1000);
  exit(0);
  }
}
