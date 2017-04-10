
#include "robomodule_due_CAN.h"
CRobomodule_due_CAN ocan;
void setup() {
  // put your setup code here, to run once:
  ocan.initdriver(CAN_BPS_1000K,0,2,3);
}
int i=0;
int s=0;
void loop() {
  // put your main code here, to run repeatedly:
  ocan.speedwheel(5000,i,0,0);
  if(s==0)
     i++;
  else
     i--;
  if(i>8000)
     s=1;
  if(i<-8000)
     s=0;
  delay(5);
}
