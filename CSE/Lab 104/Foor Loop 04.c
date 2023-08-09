//Write a C program to print harmonic series up to N using a for loop.
//Sample Input: And Output
//          5 : 1+1/2+1/3+1/4+1/5
//          6 : 1+1/2+1/3+1/4+1/5+1/6






int main() {
    int N, i ;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    printf("Harmonic series up to %d: 1", N);


    for (i = 2; i <= N; i++) {
        printf(" + 1/%d", i);

    }
}

