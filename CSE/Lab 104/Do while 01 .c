#include <stdio.h>

int main() {
    int x, N,y,multiple;
    printf("Enter two integer : ");
    scanf("%d %d", &x, &N);

    y = 1;


    printf("Sample Output:\n");
    do {
        multiple = x * y;
        printf("%d No. Multiplier of %d: %d\n", y, x, multiple);
        y++;
    } while (multiple <=N);

    return 0;
}
