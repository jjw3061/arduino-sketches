int redpin = 13;
int greenpin = 11;
int bluepin = 9;
int whitepin = 7;
int Time = 500;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(whitepin, OUTPUT);

}

void light(int pin, int ticker){
  void setup(){
    pinMode(pin,OUTPUT);
  }
  digitalWrite(pin, HIGH);   
  delay(ticker);              
  digitalWrite(pin, LOW);
  delay(ticker);
  
}

light(13, 1000)

  
/*

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redpin, HIGH);   
  delay(Time);              
  digitalWrite(redpin, LOW);
  delay(Time);  

  digitalWrite(greenpin, HIGH);   
  delay(Time);              
  digitalWrite(greenpin, LOW);
  delay(Time);

  digitalWrite(bluepin, HIGH);   
  delay(Time);              
  digitalWrite(bluepin, LOW);
  delay(Time);

  digitalWrite(whitepin, HIGH);   
  delay(Time);              
  digitalWrite(whitepin, LOW);
  delay(Time);
*/
}
