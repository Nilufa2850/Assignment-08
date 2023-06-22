/*

    *    
   ***
  *****
 *******
*********

*/

#include<stdio.h>
int main()
{
    int i , j;

    for(i=1 ; i<=5 ; i++)
    {
        for (j=1 ; j<=9 ; j++)
        {
            if( (6-i)<=j && j<=(4+i) )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;

}
