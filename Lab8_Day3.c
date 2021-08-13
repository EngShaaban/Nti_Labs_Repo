/*************************************************************************************
	 * Title                 :   Lab8_Day3
	 * Filename              :   Lab8_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   .
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	unsigned char counter = 1  ;
	unsigned char fact = 1  ;
	unsigned int num ;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for( counter = 1 ; counter <= num   ; counter++ ) 
	{
		fact *= counter; 
	}
	printf("Factorial for %d is:%d\n",num ,fact);
	
	
}// End of main().