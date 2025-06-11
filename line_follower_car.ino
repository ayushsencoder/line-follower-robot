int irL= 3;
int irR= 4;
int enA= 5;
int in1 =8;
int in2 =9;
int in3 =10;
int in4 = 11;
int enB =6;
int sensor_L;
int sensor_R;
void setup() {
  Serial.begin(9600);
  pinMode(irL , INPUT);
  pinMode(irR , INPUT);
  pinMode(enA , OUTPUT);
  pinMode(in1 , OUTPUT);
  pinMode(in2 , OUTPUT);
  pinMode(in3 , OUTPUT);
  pinMode(in4 , OUTPUT);
  forward();
  
  
  
}
void loop() {
  sensor_L = digitalRead(irL);
  sensor_R = digitalRead(irR);
  Serial.print(sensor_L);
  Serial.println(sensor_R);
  if(sensor_L == 0 && sensor_R == 0) {
    analogWrite(enA,100);
    analogWrite(enB,100);
  }
  else if(sensor_L == 0 && sensor_R == 1){
    analogWrite(enA, 180);
    analogWrite(enB, 20);
  }
  else if(sensor_L == 1 && sensor_R == 0){
    analogWrite(enA, 20);
    analogWrite(enB, 180);
  }
  else if(sensor_L == 1 && sensor_R == 1){
  
   analogWrite(enA, 10);
    analogWrite(enB, 10); 
}


}
void forward(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
