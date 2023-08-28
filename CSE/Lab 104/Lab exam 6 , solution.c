#include<stdio.h>
float input_amount()
{
    float amt;
    printf("Enter the amount: ");
    scanf("%f", &amt);
    return amt;
}
float con_to_eur(float amt)
{
    return amt*.85;
}
float con_to_gbp(float amt)
{
    return amt*.73;
}
int main()
{
    while(1)
    {
        float a;
        a = input_amount();
        int choice;

        printf("Enter your choice: \n1.EUR\n2.GBP\n\n0.Exit");
        scanf("%d", &choice);
        if(choice==1)
        {
            float b;
            b = con_to_eur(a);
            printf("%f \n", b);
        }
        else if(choice==2)
        {
            float c;
            c = con_to_gbp(a);
            printf("%f \n", c);
        }
        else if (choice == 0)
        {
            exit(0);
        }
    }
}
