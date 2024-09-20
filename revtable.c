#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The multiplication table is coming \n");

    for(int i = 10; i >= 1; i--) {
        printf("%d * %d = %d \n", n, i, (n * i));
    }
    return 0;
}