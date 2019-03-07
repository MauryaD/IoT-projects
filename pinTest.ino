int check;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT); //pin connected to BOLT

  pinMode(7,OUTPUT); //LED pin
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  check=digitalRead(6);
  if(check == 1)
  digitalWrite(7,HIGH);
 
  else
  digitalWrite(7,LOW);
  

}
