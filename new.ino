void setup(){   
    pinMode(13, OUTPUT);              
}
void loop(){
	for (int i = 0; i < 3; i = i + 1){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
	}
  	delay(200);
	for (int i = 0; i < 3; i = i + 1){
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(400);
	}
  	delay(200);
	for (int i = 0; i < 3; i = i + 1){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
	}
	delay(2000);
}