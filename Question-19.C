/*

  *****     *****  
 *******   ******* 
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
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

    for(i=1 ; i<=3; i++)
    {
            for (j=1 ; j<=19 ; j++)
            {
                    if(((4-i)<=j && j<=(6+i))  ||  ((14-i)<=j && j<=(16+i)))

                             printf("*");

                    else
                             printf(" ");
    
            }
            
            printf("\n");
    }

    // print 2nd part of this pattern

    for(i=1 ; i<=10; i++)
    {
            for (j=1  ; j<=19 ; j++)
            {           
                    if (i==1 && j==7)
                            printf("MySirG");

                    if (i==1 && j>=7 && j<=12)
                            continue;

                    if(j>=i && j<=(20-i))
                            printf("*");
                            
                    else    printf(" ");
    
            }
            
            
            printf("\n");
    }


    return 0;

}
