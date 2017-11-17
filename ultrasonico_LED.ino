const int trigPin = 9; //porta trig 
const int echoPin = 8; //porta echo

long duration;
int distance;
int vermelho = 13; //porta do led vermelho

void setup(){
    Serial.begin(9600); 
    //aqui esta sendo declarada as saidas das portas.
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(vermelho, OUTPUT);
   // pinMode(10,OUTPUT); //Pino do buzzer

}

void loop(){
    digitalWrite(vermelho, LOW); //led vermelho desligado
    
    
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration*0.034/2;


    //condição em que verifica se a distancia for menor que 10 ela irá realizar uma ação como acender uma led,tocar musica, etc... 
    if(distance < 20){
     digitalWrite(vermelho, HIGH);
      /*delay(200);
    tone(10,330,300); //MI*/

    }


    Serial.print("Distance: ");
    Serial.println(distance);
      
}
