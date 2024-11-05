 //Hardiyanto 
 //XI TAV 3
 const int buttonPin = 26;
 void setup(){
  pinMode(button, INPUT);
  Serial.begin(9600);
 }
 void loop(){
  int buttonState = digitalRead(buttonPin);
  Serial.print("YA");
  if (buttonState == HIGH ) {
    Serial.println("YA");
  } else {
    Serial.println("TIDAK");
    delay(100);
}
 }
