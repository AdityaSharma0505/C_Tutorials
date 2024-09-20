#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the value of number whose square is to be calculated : ");
    scanf("%d", &n);

    printf("\nThe square is : %f \n", pow(n, 2));

    return 0;
}