/****************************************************************************************
	 * Title                 :   Lab6_Day4
	 * Filename              :   Lab6_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   None.
	 ************************************************************************************/

#include<stdio.h>

/* Function prototype */
unsigned long factorial( unsigned int num );

void main(void)
{ 
    unsigned int  num  ;
	unsigned long  res ;
	
    /* Printing and scanning the first number.*/
	printf("Enter a number: "); 
	scanf("%d",&num);
	
    res = factorial( num );
	
	printf("Fact(%d)= %ld\n",num , res );
	
}// End of main().

unsigned long  factorial( unsigned int num )
{ 
	unsigned long fact = 1 ;
	
	if ( num == 0 )
	{
		return fact ;
	}
	else 
	{
			while( num > 1 ) 
	        {
				
		      return fact = num *  factorial( --num );
			  
	        }// End of while().
	
	}// End of if else .
    
}// End of factorial().


