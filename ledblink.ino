const int irSensorPin = 7; // Define the pin where the IR sensor is connected
const int buzzer=6;
void setup() {
  Serial.begin(115200); // Initialize serial communication with a baud rate of 115200
  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as an input
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int irSensorValue = digitalRead(irSensorPin); // Read the IR sensor value (0 or 1)
  
  if (irSensorValue == HIGH) {
    Serial.println("IR sensor detected an obstacle!"); // Print a message when obstacle is detected
  } else {
    Serial.println("No obstacle detected."); // Print a message when no obstacle is detected
  }
  if(irSensorValue==HIGH){
    digitalWrite(buzzer,HIGH);
  }
   
    else{
    digitalWrite(buzzer,LOW);
    
    
  }
  delay(1000); // Delay for 1 second (1000 milliseconds) before reading the sensor again
}
