#include <JIrobot++.h>

input sensor1(0);		//declear an input & port 0
input sensor2(7);	

int speed;


void print();
void stop() ;	//declear an output & port 1int determine(void);
int main(void)				//Main Function
	{wait (3);
		while(1)
			{ print();
				if (!sensor1.get())
                {
				
				 mstick[0]=0;
				 
				 while (mstick[0]<500)
				 
				 {  print();
				 if  (!sensor2.get())
				 
				 {print();
				 speed=mstick[0];
				 go(5000/speed,0);
				wait(2);
				stop();}}
			 
				}
				
				
				if (!sensor2.get())
                {
				
				 mstick[0]=0;
				 
				 while (mstick[0]<500)
				 
				 {  print();
				 if  (!sensor1.get())
				 
				 {print();
				 speed=mstick[0];
				 go(5000/speed,0);
				wait(2);
				stop();}}
			 
				}
				
				
				
				
			
				 
			}
	}
	
	
void print(){print(0,0,sensor1.get());	print(6,0,sensor2.get()); print(0,2,"speed");print(6,2,speed);}
void stop()	{go(0,0);}

