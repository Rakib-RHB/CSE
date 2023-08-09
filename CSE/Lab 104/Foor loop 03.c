

//3.Write a C program to find all the divisors of a given integer N using a for loop?
//Sample Input:
//5 And output is : 1,5




int main()
{
    int N,i ;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf("Divisors of %d: ", N);

    for ( i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d", i);
            if (i != N)
                printf(",");
        }
    }



}

