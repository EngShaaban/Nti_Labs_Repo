/*************************************************************************************
	 * Title                 :   Lab4_Day3
	 * Filename              :   Lab4_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   .....
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	unsigned int counter = 0 ; 
	
	for( counter = 1 ; counter < 10 ; counter++ )
	{
		printf("Iteration number: %d\n",counter); 
	}// End of for loop.
	
	printf("I am outside the for loop\n"); 
	
}// End of main().