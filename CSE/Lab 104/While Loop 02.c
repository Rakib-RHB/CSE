//Write a C program to find all the years up to a given number N in which Halley’s
//comet has been observed using a while loop.
//N.B.- Suppose Halley's comet appears every 200 years.
//Sample Input:
//100
//500
//Sample Output:

//Has not been observed yet
//200
//400




int main()
{
    int N, year;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf(" Halley's comet has been to %d:\n", N);

    year = 200;
    while (year <= N)
    {
        printf("%d\n", year);
        year += 200;
    }
}

