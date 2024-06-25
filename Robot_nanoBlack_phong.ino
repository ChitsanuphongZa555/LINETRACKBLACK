#include <Adafruit_MCP3008.h>


#define NUM_SENSORS 8  //จำนวนเซนเซอร์
int F[NUM_SENSORS];
int REF[NUM_SENSORS];
int LastError;
int x = 0;
int sensor = 0;

Adafruit_MCP3008 adc;
//PHONG
// int MaxValue[NUM_SENSORS] = { 47, 44, 42, 43, 45, 45, 45, 46 };
// int MinValue[NUM_SENSORS] = { 883, 882, 830, 763, 866, 867, 864, 878 };
//EDDY
// int MaxValue[NUM_SENSORS] = { 493, 419, 606, 545, 627, 472, 525, 501 };
// int MinValue[NUM_SENSORS] = { 966, 955, 979, 968, 981, 970, 967, 954 };
int MaxValue[NUM_SENSORS] = { 358, 236, 52, 385, 501, 52, 229, 235 };
int MinValue[NUM_SENSORS] = { 931, 920, 621, 939, 962, 687, 927, 927 };
void setup() {
  Serial.begin(9600);
  PHONG_begin();

  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  Serial.println("ready");
  OK();
  Serial.println("OK");
  AutoRef();
  delay(500);
  // SerialF();
  // SerialCalibrate();
  // ShowCalibrate();

  // TrackTime(baseSpeed, Kp(ปรับขึ้นทีละ 0.01), Kd(ปรับขึ้นทีละ 0.1), delay(milli second))
  // r = right
  // l = left
  // p = pass
  // s = stop

  // pong();
  // eddy();

  // TrackCross(100, 0.045, 0.85, 'l');
  // TrackCross(100, 0.045, 0.85, 'l');
  // TrackCross(100, 0.045, 0.85, 'l');
  // TrackTime(120, 0.04, 0.8, 1300);
  // TrackTime(130, 0.04, 0.8, 1300);

  // TrackCross(100, 0.04, 0.55, 'l');
  // TrackCross(100, 0.04, 0.55, 'l');
  // TrackCross(100, 0.04, 0.55, 'l');
  // TrackTime(120, 0.06, 0.7, 1200);
  // TrackTime(140, 0.06, 0.7, 1000);
  // TrackTime(120, 0.065, 0.7, 3000);
  // TrackTime(100, 0.04, 0.7, 1500);

  // TrackTime(60, 0.04, 0.6, 500);
  // TrackCross(80, 0.04, 0.55, 'l');
  // TrackCross(80, 0.045, 0.55, 'l');
  // TrackCross(80, 0.04, 0.55, 'l');
  // TrackTime(100, 0.35, 0.7, 1000);
  // TrackCross(80, 0.04, 0.55, 'l');
  // TrackCross(80, 0.04, 0.55, 'l');
  // TrackCross(80, 0.04, 0.55, 'l');
  // TrackCross(120, 0.06, 0.9, 'r');
  // TrackCross(150, 0.06, 0.9, 'l');
  // TrackCross(150, 0.06, 0.9, 'p');
  // TrackCross(150, 0.06, 0.9, 'l');
  // TrackCross(110, 0.09, 0.9, 'l');
  // TrackCross(210, 0.06, 0.9, 'l');
  // TrackCross(220, 0.06, 0.9, 'l');

  // TrackTime(100, 0.035, 0.6, 500);
  // eyel(120, 0.045, 0.6, 'l');


}

void loop() {
  // TrackTime(120, 0.065, 0.7, 10000);
  // MotorStop();
  // TrackTime(110, 0.055, 0.7, 100000);
  Motor(100, 100);
}
