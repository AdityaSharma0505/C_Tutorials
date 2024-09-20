#include <stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    printf("The value of the factorial of %d is %d \n", n, fact);

    return 0;
}