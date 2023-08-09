#include <stdio.h>

int main() {
    int N;
    printf("Enter integer N: ");
    scanf("%d", &N);

    printf("Output:\n");

    for (int i = 1; i <= N; i *= 2) {
        for (int j = i; j >= 1; j /= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

