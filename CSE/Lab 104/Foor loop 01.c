
//1. Write a C program to find the sum of every second odd number from 1 to N using a for loop?

int main()
{
    int N, sum ;
    printf("Enter the value of N: ");
    scanf("%d", &N );

    sum = 0;
    for (int i = 3; i <= N; i += 4)
    {
        sum = sum + i;
    }

    printf("The sum of every second odd number from 1 to %d is: %d \n", N, sum);

   // return 0;
}

