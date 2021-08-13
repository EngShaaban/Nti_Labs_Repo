/*************************************************************************************
	 * Title                 :   Lab1_Day3
	 * Filename              :   Lab1_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Simple Example as a practice on switch case.
	 *************************************************************************************/
#include<stdio.h>
void main(void)
{
       
		unsigned long ID = 0  ;
		
		/*Prompt the user to enter ID.  */
		printf("Please Enter your ID: ");
		
		/*Get the ID from the user.     */
		scanf("%hd",&ID);
		
		switch( ID )
		{
		case 1234 : printf("Hellow Amer\n");                          break;
		case 5678 : printf("Hellow Sameh\n");                         break;
		case 9101 : printf("Hellow Ahmed\n");                         break;
		default: printf("Please Enter a valid ID and try again\n");   break;	
		}//End of switch().
	
}// End of main().