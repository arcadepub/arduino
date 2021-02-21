int i = 100;
int delta = 100;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  for(i = 100; i <= 1000; i+=delta){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(i);
    digitalWrite(LED_BUILTIN, LOW);
    delay(i);

    if( i == 1000 ){
      delta = -delta;
    } else if( i == 0 ){
      delta = -delta;
    } else{
      
    }
    
  }
}
