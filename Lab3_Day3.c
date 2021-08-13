/*************************************************************************************
	 * Title                 :   Lab3_Day3
	 * Filename              :   Lab3_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Scanf Porblem.
	 *************************************************************************************/

/*
 * Include Standard input/output "stdio.h" to able to use printf and scanf functions.
 */
#include<stdio.h>

// Calling the main function where the compilation starts.
void main(void)
{
	unsigned char num1 , num2=12  ; 
	
	/* Scanning and printing the first number. */
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("First number is: %d \n",num1);
	
	/* Scanning and printing the second number. */
	printf("Enter the second number: ");
	//scanf("%d",&num2);
	printf("Second number is: %d \n",num2);


}// End of main().