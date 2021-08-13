/*************************************************************************************
	 * Title                 :   Lec3_Ass4
	 * Filename              :   Lec3_Ass4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   program in C to ask the user to enter 10  numbers and if the
	 *                       :   user enters a negative number the program will neglect it
     *                       : 	 and then print their summation..
	 *************************************************************************************/

#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	unsigned char counter = 0 ;
    int           temp    = 0 ;	
	unsigned int  sum     = 0 ;
	
	do
	{
		printf("Please enter ten number : ");
		scanf("%d",&temp);
		
		if( temp >= 0 )
		{
			sum  +=  temp ;
		    counter++ ; 	
		}
		 else if( temp < 0 )
		{
			continue;
		}
		
	}while( counter < 10 );
	
	printf("Summution of entered numbers : %d\n",sum);
	
}// End of main().