#include <JIrobot++.h>

input sensor1(0);		//declear an input & port 0
input sensor2(7);	

int speed;


void print();
void stop() ;	//declear an output & port 1int determine(void);
int main(void)				//Main Function
	{wait (3);
		while(1)
			{waitms(50);
			cls();	 print();
				if (!sensor1.get())
                {
				
				 mstick[0]=0;
				 mstick[1]=0;
				 
				 while (mstick[0]<500)
				 
				 { cls();	 print();
				 if  (!sensor2.get())
				 
				 {cls();	print();
				 speed=mstick[0];
				 go(5000/speed,0);
				wait(2);
				stop();}}
				
				  if (!sensor1.get())
				 {go(250,0);waitms(500);stop();}
				  mstick[0]=0;
			 
				}
				
				
				if (!sensor2.get())
                {
				
				 mstick[0]=0;
				 
				 while (mstick[0]<500)
				 
				 { cls();	 print();
				 if  (!sensor1.get())
				 
				 { cls();	print();
				 speed=mstick[0];   //PAY ATTENTION FOT THESE PLACE,IF IT IS IN FOR,IT WILL BE A MISTAKE
				 for(1;;)
				 {cls();	print(9,2,"hi,l`m here");
				 
				 go(-5000/speed,0);                             
				 
				 if(!sensor1.get()){cls();break;}
				
				}
				}
			 
				}
				if (!sensor2.get())
				 {go(-250,0);waitms(500);stop();}
				}
				
			 mstick[0]=0;
			  mstick[1]=0;
				 cls();	
			}
	}
	
	
void print(){print(0,0,sensor1.get());	print(6,0,sensor2.get()); print(0,2,"speed");print(6,2,speed);}
void stop()	{go(0,0);}
