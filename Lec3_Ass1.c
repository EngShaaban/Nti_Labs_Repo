/*************************************************************************************
	 * Title                 :   Lec3_Ass1
	 * Filename              :   Lec3_Ass1.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   C program accepts 10 numbers from the user and find their 
	 *                           summation and averager.
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	/******************************************************************************
	* Variables Declaration:
	*
	* counter              : To count 10 times.
	* temp                 : To get the input from the user 
	*                        each iteration.
	* sum                  : To store the input of iteration.
	* avrg                 : To store the result of the Averager
	*                        calculation in it.
	*******************************************************************************/
	unsigned char counter    ; 
	unsigned int  temp   = 0 ; 
	unsigned int  sum    = 0 ; 
	float         avrg   = 0 ;
	
	for( counter = 1 ; counter <= 10 ; counter++ )
	{
		printf("Enter num.(%d/10):",counter);
		scanf("%d",&temp);
		sum+=temp; 		
	}// End of for loop.

	/* Calculate the Averager.      */
	avrg = ( (float)(sum ) )/ 10 ;
	
	/* Show the Results.            */
	printf("Summation=%d\n",sum);
	printf("Averager=%0.3f\n",avrg);
	
	
	
}// End of main().