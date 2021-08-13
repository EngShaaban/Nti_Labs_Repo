/*************************************************************************************
	 * Title                 :   Lab10_Day3
	 * Filename              :   Lab10_Day3.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 10, 2021
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
	unsigned char counter = 3 ; 
	unsigned short pass ;  
	 
	if( (counter >= 0) && (pass != 1593) )
	{
		do 
		{
			printf("Enter a valid password:");
		    scanf("%d",&pass);
			if((pass == 1593)&&(counter >0) )
			{
				printf("Wellcome \n");
				return; 
			}
			else
			{
				counter--;
			}
			 
		}while(counter > 0 );
	}
	else{
		printf("Wellcome \n");
	}
}// End of main().