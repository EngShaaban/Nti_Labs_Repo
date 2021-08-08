/*************************************************************************************
 * Title                 :   Lab2
 * Filename              :   Lab2.c
 * Author                :   Shaban Abdullah
 * Origin Date           :   Aug 8, 2021
 * Version               :   0.0.0
 * Compiler              :   GCC
 * Notes                 :   None.
 *
 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
int main(void)
{
	/**********************************************************************************
	 * Declare variable "var" to entered by user and initialize it by Zero.
	 *
	 *           +----------+
	 *     var   |     0    |
	 *           +----------+
	 *
	 **********************************************************************************/
	int var = 0 ;

	/*Prompt the user to enter a number.*/
	printf("Please enter a number:\n");

	/*Read the Value from  the user .*/
	scanf("%d",&var);

	/*Show the result .*/
	printf("The number you entered is :%d\n",var);


}// End of main().


