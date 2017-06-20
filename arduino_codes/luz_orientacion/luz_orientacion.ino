/* Coding by Edgar Vazquez
 *
 *Este programa toma lectura de dos sensores de luz (Fotoresistencias)
 *Conectadas al pin (A0) y (A1)  de los pines analogicos. 
 *
 * Y gira hasta llegar a un punto estable para el robot, el cual sucede 
 * cuando los dos valores de la lectura son iguales.
 * Este programa se basa en  en el antes realizado con 5 estados de un 
 * robot movil se utiliza un puente H L298. Por tanto se utilizan los
 * pines de direccion 2, 3, 4, 5.
 * 
 * Este programa  SI  utiliza el control de velocidad por tan es recomendable utilizar
 * los pines 6 y 9 como salidas PWM.
 */
 
int s_left;
int s_right;
int error;

void setup() {
    // Esta configuracion DEPENDE DE como conectaron su motor
    // La etiqueta es solo representativa.

    //Motor derecho
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);

    //Motor izquierdo
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);

    // Se inicia la comunicación serial a una velocidad de trasferencia
    // de 9600 baudrate (bits/segundo)
    Serial.begin(9600);

}

// Declaracion de una funcion recibe un parametro que
// sera el tiempo variable de tipo entero llamada "time"
// y no regresa nada.
void avanza(int time)
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  delay(time);
}

void reversa(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(time);
}


void giraDerecha(int time)
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(time);
}

void giraIzquierda(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  delay(time);
}

void Stop(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(time);
}



void loop() {
  
  analogWrite(6, 100);
  analogWrite(9, 100);

  s_left = analogRead(A0);
  Serial.print("Sensor_1: ");
  Serial.print(s_left);

  s_right = analogRead(A1);
  Serial.print(" ---   Sensor_2: ");
  Serial.println(s_right);

  // Cuando el error es positivo significa que el valor del sensor izquierdo es mayor
  // que la lectura del sensor derecho y por tanto giraremos hacia la derecha.
  error = s_left - s_right;

  if (error > 0)
  {
      giraIzquierda(50);
  }
  else if(error < 0)
  {
      giraDerecha(50);  
  }
  else
  {
      Stop(50);  
  }

  /* Se recomienda a los alumnos realizarse las siguientes preguntas:
   *  
   *  
   * ¿Que tan estable es el comportamiento del robot?
   * ¿Como podría ser más estable? 
   * ¿Como podriamos cambiar la sensibilidad del robot?
   */
  
  
}






