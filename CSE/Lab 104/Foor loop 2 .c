
//Write a C program to print squares and cubes of all numbers from 1 to N using a forloop ?


int main() {
    int N , i, square , cube;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i++) {
        square = i * i;
        cube = i * i * i;
        printf("Square and cube of %d : %d %d\n", i, square, cube);
    }

    return 0;
}

