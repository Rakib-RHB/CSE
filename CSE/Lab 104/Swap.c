#include <stdio.h>



int a,b;
a=5;
b=10;



int swap()
{
    int temp;
    temp=a;
    a=b;
    b=temp;


}

int main()

{


    printf("Before :%d %d\n",a,b);
    swap(a, b);
    printf("After  :%d %d\n",a,b);



    return 0;
}

