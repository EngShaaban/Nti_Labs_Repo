/*************************************************************************************
	 * Title                 :   Lab1_Day4
	 * Filename              :   Lab1_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Practice do while()..
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{ 
 
    int i ; 
 
	for ( i = 0 ; i<10 ; i++)
	{
		printf("Hi\n");
		
		int j = 0 ; 
		
		while( j < 10  )
		{
			printf("   %d",j);
			j++; 
		}
		
		printf("\n");
		
	}
}// End of main().