char A;
char B;
int a;
int b;
float a1;
float b1;
int wynik;
float wynik1;
String zmienna1;
String zmienna2;
String Wybor;
int wybor;

 
void setup(){
  Serial.begin(9600);
  Serial.println("wybierz dzialanie\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Koniec na dzis\n");
}
  
void loop(){

 if(Serial.available() > 0){
String Wybor = Serial.readStringUntil('\n');
wybor=Wybor.toInt();




switch(wybor)
{
case 1:

  Serial.println("DODOWANIE"); 
  Serial.println("Wpisz pierwsza liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna1 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
  
    Serial.println("Witaj " + zmienna1 + "!\n"); //Wyświetl komunikat
    a=zmienna1.toInt();
   
  Serial.println("Wpisz druga liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna2 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
    Serial.println("Witaj " + zmienna2 + "!\n"); //Wyświetl komunikat
    b=zmienna2.toInt();
    
 
 
  wynik=a+b;
  Serial.println("Wynik = ");
  Serial.println(wynik);

  break;

case 2:

    Serial.println("ODEJMOWANIE"); 
  Serial.println("Wpisz pierwsza liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna1 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
  
    Serial.println("Witaj " + zmienna1 + "!\n"); //Wyświetl komunikat
    a=zmienna1.toInt();
   
  Serial.println("Wpisz druga liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna2 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
    Serial.println("Witaj " + zmienna2 + "!\n"); //Wyświetl komunikat
    b=zmienna2.toInt();
    
 
 
  wynik=a-b;
  Serial.println("Wynik = ");
  Serial.println(wynik);

  break;

case 3:

  Serial.println("MNOZENIE"); 
  Serial.println("Wpisz pierwsza liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna1 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
  
    Serial.println("Witaj " + zmienna1 + "!\n"); //Wyświetl komunikat
    a=zmienna1.toInt();
   
  Serial.println("Wpisz druga liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna2 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
    Serial.println("Witaj " + zmienna2 + "!\n"); //Wyświetl komunikat
    b=zmienna2.toInt();

wynik=a*b;
  Serial.println("Wynik = ");
  Serial.println(wynik);

  break;

case 4:

    Serial.println("DZIELENIE"); 
  Serial.println("Wpisz pierwsza liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna1 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
  
    Serial.println("Witaj " + zmienna1 + "!\n"); //Wyświetl komunikat
    a=zmienna1.toInt();
    a1=a;
   
  Serial.println("Wpisz druga liczbe:\n");
  while(!Serial.available());       // czekaj na dane z portu szeregowego
    zmienna2 = Serial.readStringUntil('\n'); //Jeśli tak, to odczytaj je do znaku końca linii i zapisz w zmiennej odebraneDane
    Serial.println("Witaj " + zmienna2 + "!\n"); //Wyświetl komunikat
    b=zmienna2.toInt();
    b1=b;
    if(b == 0){
      Serial.println("ZAKAZ PRZEZ ZERO\nNIE WOLNO TEGO ROBIC\nWROC DO PODSTAWOWKI I SIE DOKSZTALC\n");
      break;
    }

wynik1=a1/b1;
  Serial.println("Wynik = ");
  Serial.println(wynik1);

  break;

 case 5:
Serial.println("DO ZOBACZENIA!\n");
delay(50);
 exit(0);
}
  
Serial.println("\n\nWybierz nowe dzialanie");  
Serial.println("\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Koniec na dzis\n");
}
}
