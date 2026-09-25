/* This program is written to determine T of a physical pendulum using a break beam sensor 
Last version: 2021/08/16
By: Freek Pols c.f.j.pols@tudelft.nl
Sensor down: GND | + 5V | sensor pin 8
*/

int Number_of_periods = 1;
int value = 0;
unsigned long time1;                       //start time
unsigned long time2;                       //end time
int i = 0;                        //counter
int last;                         //

int detectiepin = 8;


void setup() {
  pinMode(detectiepin,INPUT);               //pin 9 is used for the detection
  digitalWrite(detectiepin,HIGH);           //an internal resistor is used
  Serial.begin(9600);             //talking with the arduino using the serial monitor
}

void loop() {

  value = digitalRead(detectiepin);         //reading the break beam sensor

  if(value == 0 && last == 1){    //if the light beam is broken, start the following procedure
    if(i == 0){                   //if it is the first measurement
      //time1 = millis();           //start the timer
      time1 = micros();
    }
    
    i = i + 1;                    //update the number of breaks
  
    if(i==Number_of_periods*2+1){                     //if three breaks (so T), display the time.
      //time2 = millis();
      time2 = micros();
      Serial.println(time2-time1);//print the time of 1T
      i = 0;                      //reset the counter
    }
  }

  last = value;                   //update the latest recorded value in order to see online new breaks in the light beam

}
