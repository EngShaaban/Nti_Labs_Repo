#include <stdio.h>
int main(void)
{
	unsigned int grade;

	printf("Please Enter your score:");
	scanf("%d",&grade);

	if( (grade < 0) || (grade > 255) ){
		printf("Error \n");
	}
	else if ( (grade > 0)  &&  (grade <= 50) )
	{
		printf("Falied\n");
	}
	else if ( (grade >= 51) && (grade < 65) )
	{
		printf("Pass\n");
	}
	else if ( (grade >= 65) && (grade < 75) )
	{
		printf("Good\n");
	}
	else if ( (grade >= 76) && (grade < 85 ) )
	{
		printf("Very Good \n");
	}
	else
	{
		printf("Excelente \n");
	}
}// End of main().