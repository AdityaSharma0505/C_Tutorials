#include <stdio.h>
void multiplication(int n);
int main() {
    int a;
    printf("Enter the number whose multiplication table you want to be displayed : ");
    scanf("%d", &a);

    printf("\nThe multiplication table for %d is coming : \n", a);

    multiplication(a);
}

void multiplication(int n) {

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", n, i, (n * i));
    }
}