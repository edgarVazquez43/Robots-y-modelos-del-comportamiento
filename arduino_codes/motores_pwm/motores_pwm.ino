/* Coding by  Edgar V.
 * Este programa muestra los 5 estados de un robot movil
 * se utiliza un puente H L298. Por tanto se utilizan los
 * pines de direccion 2, 3, 4, 5.
 * 
 * Se agrega el uso de un pwm para el control de velocidad
 * de los motores
 */

// pines que controlaran la velocidad del motor derecho e izquierdo
// Estos pines deben ir al puente H en los pines de Enable
int pinPWM_D = 3;
int pinPWM_I = 5;

//Pines que controlan la direccion del motor derecho
int pinMD_1 = 2;
int pinMD_2 = 4;

//Pines que controlan la direccion del motor izquierdo
int pinMI_1 = 7;
int pinMI_2 = 8;


void setup() {
  // put your setup code here, to run once:

    // Esta configuracion depende de como conectaron su motor
    // La etiqueta es solo representativa.

    
    //Motor derecho
    pinMode(pinMD_1, OUTPUT);
    pinMode(pinMD_2, OUTPUT);

    //Motor izquierdo
    pinMode(pinMI_1, OUTPUT);
    pinMode(pinMI_2, OUTPUT);

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
  // put your main code here, to run repeatedly:

  // Con esta instruccion establecemos la velocidad de nuestros motores
  // La velocidad solo puede estar en el rango entre 0 y 255
  // Donde 0 es una velocidad nula, y 255 es la velocidad máxima del robot

  // Podemos establecer por separado las velocidades de cada motor
  // Velocidad motor derecho
  analogWrite(pinPWM_D, 100);

  // Velocidad motor izquierdo
  analogWrite(pinPWM_I, 100);

  //Tiempo en milliseconds
  avanza(100);
  Stop(500);

  
  giraDerecha(500);
  Stop(500);
  
  giraIzquierda(500);
  Stop(500);
}
