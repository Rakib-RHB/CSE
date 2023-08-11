//  1
// 2 3
//4 5 6

int main()
{
    int n,i,j,a ;
    a=1;
    printf(" Enter the value :");
    scanf("%d",&n);
    for ( i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf(" %d  ",a);

            a++;
        }

        printf(" \n");
    }

    return 0;


}

