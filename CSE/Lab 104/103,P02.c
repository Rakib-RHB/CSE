#include<stdio.h>
int main(){
int x,y,d,c,b,a;
printf("Enter the input :");
    scanf("%d",&x);
    d=x/10;
    x=x%10;
    c=x/10;
    x=x%10;
    b=x/10;
    a=x%10;
    y=(d*1000)+(c*100)+(b*10)+(c*1);
    printf("The output is %d",y);








return 0;
}
