int s1 = 0;    // select the input pin for the potentiometer
int s2 = 1;
int s3 = 2;
int s4 = 3;
int s5 = 4;
int s6 = 5;
int s7 = 6;
int s8 = 7;
int s9 = 8;
int s10 = 9;
int s11 = 10;
int s12 = 11;
int s13 = 12;
int s14 = 13;
int s15 = 14;
int s16 = 15;

int sVal1 = 0;
int sVal2 = 0;
int sVal3 = 0;
int sVal4 = 0;
int sVal5 = 0;
int sVal6 = 0;
int sVal7 = 0;
int sVal8 = 0;
int sVal9 = 0;
int sVal10 = 0;
int sVal11 = 0;
int sVal12 = 0;
int sVal13 = 0;
int sVal14 = 0;
int sVal15 = 0;
int sVal16 = 0;

int lsVal1 = 0;
int lsVal2 = 0;
int lsVal3 = 0;
int lsVal4 = 0;
int lsVal5 = 0;
int lsVal6 = 0;
int lsVal7 = 0;
int lsVal8 = 0;
int lsVal9 = 0;
int lsVal10 = 0;
int lsVal11 = 0;
int lsVal12 = 0;
int lsVal13 = 0;
int lsVal14 = 0;
int lsVal15 = 0;
int lsVal16 = 0;// variable to store the value coming from the sensor

int sVel1;
int sVel2;
int sVel3;
int sVel4;
int sVel5;
int sVel6;
int sVel7;
int sVel8;
int sVel9;
int sVel10;
int sVel11;
int sVel12;
int sVel13;
int sVel14;
int sVel15;
int sVel16;



unsigned long time;

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
}

double getSensorVel(int sensorPin, int val, int lVal, int vel) {
  val = analogRead(sensorPin);
  vel = (val - lVal)/time;
  lVal = val;
  Serial.write("Vel of " + vel);
  return vel;
}

void loop() {
  time = millis();
  getSensorVel(s1, sVal1, lsVal1, sVel1);
  getSensorVel(s2, sVal2, lsVal2, sVel2);
  getSensorVel(s3, sVal3, lsVal3, sVel3);
  getSensorVel(s4, sVal4, lsVal4, sVel4);
  getSensorVel(s5, sVal5, lsVal5, sVel5);
  getSensorVel(s6, sVal6, lsVal6, sVel6);
  getSensorVel(s7, sVal7, lsVal7, sVel7);
  getSensorVel(s8, sVal8, lsVal8, sVel8);
  getSensorVel(s9, sVal9, lsVal9, sVel9);
  getSensorVel(s10, sVal10, lsVal10, sVel10);
  getSensorVel(s11, sVal11, lsVal11, sVel11);
  getSensorVel(s12, sVal12, lsVal12, sVel12);
  getSensorVel(s13, sVal13, lsVal13, sVel3);
  getSensorVel(s14, sVal14, lsVal14, sVel4);
  getSensorVel(s15, sVal15, lsVal15, sVel15);
  getSensorVel(s16, sVal16, lsVal16, sVel16);
  
}
