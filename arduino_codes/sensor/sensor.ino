int sensor_1;
int sensor_2;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensor_1 = analogRead(A0);
  Serial.print("Sensor_1: ");
  Serial.print(sensor_1);


  sensor_2 = analogRead(A1);
  Serial.print(" ---   Sensor_2: ");
  Serial.println(sensor_2);

  
}
