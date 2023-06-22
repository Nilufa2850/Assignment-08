/*

    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA

*/

#include<stdio.h>
int main()
{
    int i , j ;
    char k ;

    for(i=1 ; i<=5 ; i++)
    {
            k='A';

            for (j=1  ; j<=9 ; j++)
            {
                    if( (6-i)<=j && j<=(4+i) )
                    {
                            printf("%c",k);

                            if(j<5)
                                k++;
                            else
                                k--;   
                    }

                    else 
                            printf(" "); 
    
            }
            
            printf("\n");
    }

    return 0;

}
