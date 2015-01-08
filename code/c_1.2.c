#include <JIrobot++.h>

input sensor1(0);		//declear an input & port 0
input sensor2(7);	
void stop()	;//declear an output & port 1int determine(void);
int main(void)				//Main Function
	{wait (3);
		while(1)
			{ 
				if (!sensor1.get())
                {go(250,0);
				waitms(30);
				stop();
				print(0,0,sensor1.get());	print(6,0,sensor2.get()); }
			 
				
				 else if (!sensor2.get())
                {go(-250,0);
				waitms(30);
				stop();
				print(0,0,sensor1.get());	print(6,0,sensor2.get()); }
			 
                 

				 
			}
	}
	
	
	void stop()	{go(0,0);}
