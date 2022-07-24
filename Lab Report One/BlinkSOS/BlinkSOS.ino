// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

// 3 units wait time between each space
// 1 unit wait time per space in one letter
// 1 unit per each signal
// 3 units per each dash

// For S
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000);

// For O
digitalWrite(LED_BUILTIN, HIGH); 
delay(1500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000);
digitalWrite(LED_BUILTIN, HIGH); 
delay(1500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 
digitalWrite(LED_BUILTIN, HIGH); 
delay(1500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 

// For S
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000); 
digitalWrite(LED_BUILTIN, HIGH); 
delay(500); 
digitalWrite(LED_BUILTIN, LOW); 
delay(1000);
}