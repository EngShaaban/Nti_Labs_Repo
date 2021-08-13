/*************************************************************************************
	 * Title                 :   Lec3_Ass2
	 * Filename              :   Lec3_Ass2.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   None.
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	
	unsigned int user_Input = 0 ;
	
	printf("Enter the result of the multiplication : 3 x 4 = ");
	scanf("%d",&user_Input);
	
	while( user_Input != 12 )
	{
		printf("Try again: ");
		scanf("%d",&user_Input);
	}
	if ( user_Input == 12 )
	{
		printf("Good job.\n");
	}
	else
	{
		//Report error.
	}
}// End of main().