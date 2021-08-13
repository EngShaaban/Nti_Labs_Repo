/****************************************************************************************
*                                                                                       *
****************************************  Lec3_Ass5.c   *********************************  
*	                                                                                    *
*****************************************************************************************/
 
 #include "Lec3_Ass5.h"
 
 unsigned int get_Ten_Positive_Num_Sum(void)
 {
	 unsigned int counter  = 0  ; 
	 unsigned int summtion = 0  ;
	 signed int   temp     = 0  ; 
	 
	 while( counter < 10 )
	 {
		 /* Get and scan a value from the user.*/
		 printf("Enter a number: ");
		 scanf("%d",&temp);
		 
		 if( temp < 0 )
		 {
			 break; 
		 }
		 else 
		 {
			 summtion += temp ; 
		 }
		 
		 counter++ ; 
		 
	 }//End of while().
	 
	 return summtion ;
	 
 }// End of get_Ten_Positive_Num_Sum(void);
