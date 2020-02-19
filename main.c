/*
 * carApp.c
 *
 * Created: 17-Feb-20 10:12:10 AM
 * Author : ahmed
 */ 

//#include <avr/io.h>

#include "/carApp/carApp/carApp/APP/car_sm.h"


int main(void)
{	
	/*init care steering*/
	Car_SM_Init();

    while (1) 
    {
		/*update the distance measured*/
		Car_SM_Update();
		
	}

}

