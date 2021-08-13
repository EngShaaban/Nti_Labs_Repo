/*************************************************************************************
	 * Title                 :   Lab9_Day3
	 * Filename              :   Lab9_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Practice while()..
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	unsigned int number ; 
	unsigned int counter =1 ;
	
	printf("Enter a number:");
	scanf("%d",&number);
	
	while( counter <= 12 )
	{
		printf("%d * %d = %d\n",number , counter , ( number * counter )) ;
		counter++; 
		
	}
	
	
}// End of main().