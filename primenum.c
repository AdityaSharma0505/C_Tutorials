#include <stdio.h>
int main() {

    int i, j, count;
    
    printf("The whole numbers from 10 to 150 are coming : \n");
    for(int i = 10; i <= 150; i++) {
        printf("%d ", i);
    }

    printf("\nThe prime numbers from 10 to 150 are coming : \n");
    for(i = 10; i <= 150; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && i != 1)
            printf("%d ", i);
            count = 0;
    }

    return 0;
}