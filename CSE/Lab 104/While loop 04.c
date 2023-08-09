//Write a C program using a while loop that takes integer input age and shows output of
//which age group that age belongs to. The program should keep taking inputs of age and
//show output until ‘0’ is provided as input.
//Toddler - 1-3,Child - 4-9.Tween - 10-12,Teen - 13-19
//Young Adult - 20-24,Adult - 25 and above




#include <stdio.h>

int main() {
    int age;
    //printf("Enter age (0 to exit): ");
       // scanf("%d", &age);

    while (1) {
        printf("Enter age (0 to exit): ");
        scanf("%d", &age);

        if (age == 0) {
            printf("Exiting program.\n");

        } else if (age >= 1 && age <= 3) {
            printf("Toddler\n");
        } else if (age >= 4 && age <= 9) {
            printf("Child\n");
        } else if (age >= 10 && age <= 12) {
            printf("Tween\n");
        } else if (age >= 13 && age <= 19) {
            printf("Teen\n");
        } else if (age >= 20 && age <= 24) {
            printf("Young Adult\n");
        } else if (age >= 25) {
            printf("Adult\n");
        } else {
            printf("The age is Invalid \n");
        }
    }

    return 0;
}
