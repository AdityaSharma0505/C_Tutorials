#include <stdio.h>
int main() {
    // int n;
    // int sum = 0;

    // printf("Enter the value of n : \n");
    // scanf("%d", &n);

    // for (int i = 0; i <= n; i ++) {
    //     sum = sum + i;
    // }

    // printf("The value of the sum is %d", sum);

    // Sum of numbers from 5 to 50

    int sum = 0;

    for(int i = 5; i <= 50; i++) {
        sum += i;
    }

    printf("The value of sum of the numbers from 5 to 50 is %d\n", sum);

    return 0;
}