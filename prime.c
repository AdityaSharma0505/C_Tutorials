#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            printf("The number is not prime \n");
            break;
        }
        else if((i == (n-1)) && (n % i != 0)) {
            printf("The given number is prime \n");
        }
        else {
            continue;
        }
     }

    return 0;
}