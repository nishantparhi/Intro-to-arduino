int brightness = 0; 

void setup() {
Serial.begin(9600);
pinMode(9, OUTPUT); //initializes pin 9 for output
Serial.println("Value"); //serial monitor message

}
void loop() {

delay(2000); 
int c = Serial.parseInt(); //Input from serial monitor
brightness += c;

analogWrite(9,brightness); //outputs brightness value
  Serial.println(brightness); //prints brightness value
  delay(3000);
}