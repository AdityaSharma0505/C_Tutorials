#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    int i = 1;

    printf("Enter the value of n : \n");
    scanf("%d", n);

    do {
        sum = sum + i;
        i = i + 2;
    } while (i <= n);

    printf("The value of summation is : %d", sum);

    return 0;

}