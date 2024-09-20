#include <stdio.h>
int main() {

    // Use of Break Statement

    // int n;

    // do {
    //     printf("Enter an even number : \n");
    //     scanf("%d", &n);
    //     if ((n % 2) != 0) {
    //         break; // exit
    //     }
    // } while(1);

    // printf("End\n");

    // Use of Continue Statement

    // for(int i = 1; i <= 5; i++) {
    //     if(i == 3) {
    //         continue;     // skip
    //     }
    //     printf("%d \n", i);
    // }
    

    // Print all numbers from 1 to 10 except 6
    
    for (int i = 1; i <= 10; i++) {
        if(i == 6) {
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}