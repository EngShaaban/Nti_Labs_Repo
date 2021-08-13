/****************************************************************************************
	 * Title                 :   Lab5_Day4
	 * Filename              :   Lab5_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   None.
	 ************************************************************************************/

#include<stdio.h>

/* Function prototype */
 unsigned int max_Num( unsigned int num1 , unsigned int num2) ; 

void main(void)
{ 
unsigned int num1 , num2 ; 
	
	/* Printing and scanning the first number.*/
	printf("Enter the first number: "); 
	scanf("%d",&num1);
	
    /* Printing and scanning the second number.*/
    printf("Enter the first number: "); 
	scanf("%d",&num2);	
	
	max_Num(num1 , num2);
	
	printf("The max. Number is: %d \n",max_Num(num1 , num2));
	
}// End of main().
unsigned int max_Num(unsigned int num1 ,unsigned int num2)
{
	unsigned int max ;
	
	if( num1 >  num2 )
	{
		max = num1 ; 
	}
	else
	{
		max = num2 ; 
	}
	
	return max ;

}// End of max_Num().




