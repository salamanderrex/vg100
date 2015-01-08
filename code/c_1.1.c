#include <JIrobot++.h>

input sensor1(0);		//declear an input & port 0
input sensor2(7);		//declear an output & port 1int determine(void);
int main(void)				//Main Function
	{wait (3);
		while(1)
			{ 
				if (!sensor1.get())
                {go(250,0);
				waitms(50);
				
				print(0,0,sensor1.get());	print(6,0,sensor2.get()); }
			 
				
				 else if (!sensor2.get())
                {go(0,0);
				waitms(1);
				print(0,0,sensor1.get());	print(6,0,sensor2.get()); }
			 
                 

				 
			}
	}
