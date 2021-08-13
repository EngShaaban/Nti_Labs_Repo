/*************************************************************************************
	 * Title                 :   Lab7_Day3
	 * Filename              :   Lab7_Day3.c
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
	unsigned char num ;
	unsigned char res ;
	unsigned char counter = 1;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	
	/* Loop iterates 12 times.*/
	for( counter = 1 ; counter <= 12 ; counter++ )
	{
		res = counter * num ; 
		
		if ( res >= 255)
		{
			printf("Over flow occurs \n");
			
		}
		else 
		{
			/* Print the result. */
		     printf("%d * %d = %d \n", num , counter ,res);
		}
			
	}// End of for loop.
	
	
}// End of main().