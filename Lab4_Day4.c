/****************************************************************************************
	 * Title                 :   Lab4_Day4
	 * Filename              :   Lab4_Day4.c
	 * Author                :   Shaban Abdullah
	 * Origin Date           :   Aug 11, 2021
	 * Version               :   0.0.0
	 * Compiler              :   GCC
	 * Notes                 :   None.
	 * Discription           :   Practice do while()..
	 ************************************************************************************/

#include<stdio.h>

/* Function prototype */
void add_Nums(  unsigned int num1 , unsigned int num2  );
void sub_Nums(  unsigned int num1 , unsigned int num2  );
void div_Nums(  unsigned int num1 , unsigned int num2  );
void mul_Nums(  unsigned int num1 , unsigned int num2  );
void mod_Nums(  unsigned int num1 , unsigned int num2  );


void main(void)
{ 
	unsigned int num1 , num2 ; 
	
	/* Printing and scanning the first number.*/
	printf("Enter the first number: "); 
	scanf("%d",&num1);
	
    /* Printing and scanning the second number.*/
    printf("Enter the first number: "); 
	scanf("%d",&num2);	
	
	/* Function calling. */
    add_Nums( num1 ,  num2 );
	sub_Nums( num1 ,  num2 );
	div_Nums( num1 ,  num2 );
	mul_Nums( num1 ,  num2 );
	mod_Nums( num1 ,  num2 );
    
}// End of main().


/*Function Implementation. */
void add_Nums(unsigned int num1 , unsigned int num2 )
{
	unsigned int temp = num1 +num2 ; 
	printf("add = %d \n",temp); 
	
}// End of add_Nums().

void sub_Nums(unsigned int num1 , unsigned int num2 )
{
	unsigned int temp = num1 - num2 ; 
	printf("sub = %d \n",temp); 
	
}// End of sub_Nums().
void div_Nums(unsigned int num1 , unsigned int num2) 
{
	 float  temp = (float)num1 / num2 ; 
	printf("div = %0.2f \n",temp); 
}// End of div_Nums().

void mul_Nums(unsigned int num1 , unsigned int num2 )
{
	unsigned int temp = num1 * num2 ; 
	printf("mul = %d \n",temp); 
	
}// End of mul_Nums().

void mod_Nums(unsigned int num1 , unsigned int num2 )
{
	unsigned int temp = num1 % num2 ; 
	printf("mod = %d \n",temp); 
	
}// End of mod_Nums().