int incomingByte = 0;   // for incoming serial data

void setup() {
        Serial.begin(19200); 
        pinMode(7, OUTPUT);   
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);
                if(incomingByte==49)
                {digitalWrite(7,HIGH);
                
                }
                else if(incomingByte==50)
                {digitalWrite(7,LOW);
                
                }
}
}
