const int trigger = 9;
const int echo = 10;

long duration;
int distance;

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT); 
  Serial.begin(9600);
}
void loop() {
  
  digitalWrite(trigger, LOW);
  delay(2000);
  
  digitalWrite(trigger, HIGH);
  delay(10000);
  digitalWrite(trigger, LOW);
 
  duration = pulseIn(echo, HIGH);
 
  distance = duration * 0.034 / 2;
 
  Serial.print("Distance: ");
  Serial.println(distance);
}