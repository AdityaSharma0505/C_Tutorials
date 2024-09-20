#include <stdio.h>
int main() {
    int n, r;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    
    for(int i = 0; i <= 4; i++) {
        r = (n % 10);
        printf("%d", r);
        n  = n / 10;

    }
    
    return 0;
}