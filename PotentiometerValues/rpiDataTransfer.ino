#include <Wire.h>

#define SLAVE_ADDRESS 0x04
#define RELAY1 9

int number = 0;
int state = 0;

void setup() {
    pinMode(RELAY1, OUTPUT);

    Serial.begin(9600); // start serial for output
    // initialize i2c as slave
    Wire.begin(SLAVE_ADDRESS);

    // define callbacks for i2c communication
    Wire.onReceive(receiveData);
    Wire.onRequest(sendData);

    Serial.println("Ready!");
}

void loop() {
    delay(100);
}

// callback for received data
void receiveData(int byteCount){

    while(Wire.available()) {
       number = Wire.read();
       Serial.print("data received: ");
       Serial.println(number);

        if (number == 1){

            if (state == 0){
                digitalWrite(RELAY1, HIGH); // set the LED on
                state = 1;
            }
            else{
                digitalWrite(RELAY1, LOW); // set the LED off
                state = 0;
            }
        }
    }
}

// callback for sending data
void sendData(){
    Wire.write(number);
}
