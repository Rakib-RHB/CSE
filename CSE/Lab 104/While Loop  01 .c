

//Write a C program to print all Leap Years from 1 to N using a while loop?




int main()
{
    int N,year;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf("Leap years from 1 to %d:\n", N);

    year = 1;

    while (year <= N)
    {
        if ((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0))
        {
            printf("%d\n", year);
        }
        year=year + 1;
    }

}
