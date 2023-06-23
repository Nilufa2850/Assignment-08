/*

    *    
   ***   
  *****  
 ******* 
*********
 *******
  *****
   ***
    *

*/

#include<stdio.h>
int main()
{
    int i , j ;

    // print 1st part of this pattern

    for(i=1 ; i<=5; i++)
    {
            for (j=1  ; j<=9 ; j++)
            {
                    if( j>=(6-i) && j<=(4+i))

                            printf("*");
                    else
                            printf(" ");
    
            }
            
            printf("\n");
    }

    // print 2nd part of this pattern

    for(i=1 ; i<=4; i++)
    {
            for (j=1  ; j<=9 ; j++)
            {
                    if( (i+1)<=j && j<=(9-i))

                            printf("*");
                    else
                            printf(" ");
    
            }
            
            
            printf("\n");
    }


    return 0;

}
