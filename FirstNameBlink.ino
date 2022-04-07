// Kieron A. Boyle 
// SIT210 Embedded Systems Development
// Task 2.1P Particle Programming - First Name Blinky
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

void setup() {
    pinMode(MY_LED, OUTPUT);
}



void loop() {
    // K : -*- // YES
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(750ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(250ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(1000ms);
    
    
    
    // I : ** // YES
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(250ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(1000ms);
    

    // E : * // YES
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(1000ms);
    
    
    // R : *-* // YES
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(250ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(750ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(1000ms);
    
    // O : --- // YES
    // 3 Long flashes
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(750ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(750ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(1000ms);
    
    
    // N : -* // YES
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(750ms);
    // Turn off
    digitalWrite(MY_LED, LOW);
    delay(750ms);
    
    // Turn on
    digitalWrite(MY_LED, HIGH);
    delay(250ms);
    // Turn off. 4 second pause due to end of name
    digitalWrite(MY_LED, LOW);
    delay(4000ms);
    
}