 int led1 =2;
 int led2=7;
 int led3=12;
 int counter=0;
 int button=5;
  int r =0;
 void setup() {
 pinMode(2,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(5,INPUT);

}

void loop() {
  r=digitalRead(button);
  if(r==HIGH){
    counter++;
   if(counter==1){
    digitalWrite(led1,HIGH);
    delay(500);
    }
    else if (counter==2){
      digitalWrite(led2,HIGH);
      delay(500);
      
   }
   else if(counter==3){
    digitalWrite(led3,HIGH);
    delay(500);
   }
   else if(counter==4){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(500);
    counter=0;
   }
   
  }

}
