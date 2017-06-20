/* Coding by Edgar Vazquez
 *
 *Este programa toma lectura de dos sensores de luz (Fotoresistencias)
 *Conectadas al pin (A0) y (A1)  de los pines analogicos
 */

int sensor_1;
int sensor_2;

void setup() {
  // put your setup code here, to run once:

  // Se inicia la comunicación serial a una velocidad de trasferencia
  // de 9600 bauds (bits/segundo)
  Serial.begin(9600);
}

void loop() {
  // En el loop infinito solo imprime el valor de los dos sensores en una sola linea 
  
  sensor_1 = analogRead(A0);
  Serial.print("Sensor_1: ");
  Serial.print(sensor_1);

  sensor_2 = analogRead(A1);
  Serial.print(" ---   Sensor_2: ");
  Serial.println(sensor_2);

  
}
