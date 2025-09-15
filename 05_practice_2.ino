#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serialport
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for(int i = 0;i<5;++i){
    digitalWrite(PIN_LED, 1); // update LED status.
    delay(100); // wait for 1000 milliseconds
    digitalWrite(PIN_LED, 0);
    delay(100);  
  }
  while(1){
   digitalWrite(PIN_LED, 1); 
  }
}
