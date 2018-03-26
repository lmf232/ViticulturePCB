void setup()  { 
 pinMode(6, OUTPUT);
 analogWriteResolution(12);
 //analogWrite(6, 45);
 analogWrite(6, 95);
 PWMC_ConfigureClocks( 200000 * PWM_MAX_DUTY_CYCLE , 0, VARIANT_MCK);
} 

void loop() {}


/*
#define PULSE asm("sbi 5,0\ncbi 5,0");



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

inline void digitalWriteDirect(int pin, boolean val){
  if(val) g_APinDescription[pin].pPort -> PIO_SODR = g_APinDescription[pin].ulPin;
  else    g_APinDescription[pin].pPort -> PIO_CODR = g_APinDescription[pin].ulPin;
}
inline void digitalWriteDirectZero(int pin){
  g_APinDescription[pin].pPort -> PIO_CODR = g_APinDescription[pin].ulPin;
}
inline void digitalWriteDirectOne(int pin){
  g_APinDescription[pin].pPort -> PIO_SODR = g_APinDescription[pin].ulPin;
}

inline int digitalReadDirect(int pin){
  return !!(g_APinDescription[pin].pPort -> PIO_PDSR & g_APinDescription[pin].ulPin);
}

// the loop function runs over and over again forever
void loop() {
//  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);              // wait for a second
//  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);              // wait for a second

//REG_PIOB_SODR |= (0x01 << 26); // Turn on the LED
//REG_PIOB_CODR |= (0x01 << 26); // Turn off the LED using the CODR register

for(;;){
    g_APinDescription[9].pPort -> PIO_SODR = g_APinDescription[9].ulPin;   
    g_APinDescription[9].pPort -> PIO_CODR = g_APinDescription[9].ulPin; 
    for(int x=0; x<4; x++){    
      digitalWriteDirect(8, HIGH); 
      digitalWriteDirect(8, LOW); 
    }
    //delayMicroseconds(1);   
  }

//REG_PIOB_SODR |= (B11111111111111111111111111111111);   // set pin
//  delay (1) ;
//REG_PIOB_CODR |= (B11111111111111111111111111111111);  // clear pin

} */

