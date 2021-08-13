/*************************************************************************************
	 * Title                 :   Lab2_Day4
	 * Filename              :   Lab2_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
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
    unsigned char counter;
    unsigned char raw    ;
	unsigned char star   ; 
	
	/*Prompt the user to enter the number of raws.*/
	printf("Enter the number of raws:");
	
	/*Scanning the user input.*/
	scanf("%d",&raw);
	
	for( counter = 1 ; counter <= raw ; counter++ )
	{
		/*Print the row of stars.*/
		for( star = 1 ; star <= counter ; star++ )
		{
			
			printf("*");
			
		}// End of inner loop.
		
		//New line.
		printf("\n");
		
	}// End of outer loop.

}// End of main().