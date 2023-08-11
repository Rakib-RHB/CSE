// Question is : 1  1
//               2  2




#include<stdio.h>
int main()
{
    int x,i,j;
    printf(" Enter the value ");
    scanf ("%d",&x);
    for (i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            printf(" %d  ",i);
        }
        printf("\n");

    }


    return 0;


}
