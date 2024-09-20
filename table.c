#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of which you want the Multiplication Table to be displayed : \n");
    scanf("%d", &n);

    if(n >= 1){
        printf("The Multiplication Table for %d is coming : \n", n);
        for(int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", n, i, (n * i) );
        }
    }
    else {
        printf("Enter a valid number : \n");
        scanf("%d", &n);
    }
    return 0;
}