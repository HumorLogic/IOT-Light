
int leds[3]={D0,D1,D2};
int states[3]={LOW,LOW,LOW};
int lednum=3;

void setup() {
 setupPinMode();

}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<lednum;i++){
  turnLedOn(leds[i]);
  delay(2000);
}

for(int j=0;j<lednum;j++){
  
  turnLedOff(leds[j]);
  delay(2000);
  }

}

//set Pin mode as output,设置PIN模式为输出模式
void setupPinMode(){
for(int i=0;i<lednum;i++){
  pinMode(leds[i],OUTPUT);
  
  }

//pinMode(D0,OUTPUT);
//pinMode(D1,OUTPUT);
//pinMode(D2,OUTPUT);
}

//turn LED on method,点亮LED方法
void turnLedOn(int pin){
digitalWrite(pin,HIGH);
    }

//turn LED off method,关掉LED方法
void turnLedOff(int pin){
  digitalWrite(pin,LOW);
  }
    
