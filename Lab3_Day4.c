/****************************************************************************************
	 * Title                 :   Lab3_Day4
	 * Filename              :   Lab3_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Practice do while()..
	 ************************************************************************************/

#include<stdio.h>

/* Function prototype */
void printMyName(void);

void main(void)
{ 
	/* Function calling. */
     printMyName(); 
 
}// End of main().


/* Utality function to print My name five times whenen it invoked. */

void printMyName(void)
{
	int counter ;
	
    for (  counter = 0 ; counter < 5 ; counter++ )
	{	
	printf("Shaban Abdullah.\n");
    }
	
}// End of printMyName().