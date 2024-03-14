void setup() {//function runs once arduino board is powered on or reset
  // initialize the serial communication:
  Serial.begin(9600); //baude rate allow arduino to communicate with external device via serial port
  pinMode(4, INPUT); // Setup for leads off detection LO + (pair with D4)
  pinMode(3, INPUT); // Setup for leads off detection LO - (pair with D3)

}

void loop() {//loop
  
  if((digitalRead(D4) == 1)||(digitalRead(D3) == 1)){
    Serial.println('!');//read pin D4 or D3 (== 1 READING == NO READING)
  }
  else{
    // send the value of analog input 0:
      Serial.println(analogRead(A0));
  }
  //Wait for a bit to keep serial data from saturating
  delay(1);
}
