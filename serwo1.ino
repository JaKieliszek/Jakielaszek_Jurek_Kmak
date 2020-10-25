//Program powoduje przemieszczenie się serwa 3 razy z różną predkosćią po wciśnięciu przycisku

//Dołączenie biblioteki obsługującej serwo
#include <Servo.h> 

#define button 10

int pos = 0;

Servo servo;	//Utworzenie obiektu klasy serwo

void setup()
{
  servo.attach(9); 	//Podłączenie serwa do pinu 9
  pinMode(button, INPUT); 
  servo.write(pos);	// pozycja poczatkowa serwa
}

void loop()
{
  //Warunek sprawdzający czy przycisk został wciścnięty
  if(digitalRead(button) == HIGH){    
    //Przemieszczenie się serwa o 90 stopni z małą predkością
    for (pos; pos <= 90; pos += 1) {
      servo.write(pos);
      delay(30);
    }
    delay(1000);
    //Przemieszczenie się serwa o kolejne 90 stopni z średnią predkością
    for (pos; pos <= 180; pos += 1) {
      servo.write(pos);
      delay(20);
    }
    delay(1000);
    //Przemieszczenie się serwa do pozycji początkowej z dużą predkością
    for (pos; pos >= 0; pos -= 1) {
      servo.write(pos);
      delay(10);
    }
  }
  

}