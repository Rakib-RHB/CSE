//  Write a C Program to check whether the entered number is 0, positive or negative for
//               N number of inputs using while loops.



#include <stdio.h>
int main ()
{
    int N, i;
    i=0;
    while(i<N)
    {
        printf("Enter the number:");
        scanf("%d",&N);
        if(N>0)
        {
            printf("Positive\n");

        }
        else if(N==0)
        {
            printf("Zero\n");
        }
        else
        {

            printf("Negetive\n");
        }
    }


    return 0;


}
