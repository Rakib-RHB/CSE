//****
//-***
//--**
//---*
//1
//121
//12321
//1234321
//123454321
int main()
{
    int n,i,j;

    printf(" Enter the value :");
    scanf("%d",&n);
    for ( i=1; i<=n; i++)
    {

        for (j=1; j<n; j++)
        {
            printf("_");
        }
        for (j=n; j>=i; j--)
        {
            printf("*");
        }
    }
    printf("\n");

}
