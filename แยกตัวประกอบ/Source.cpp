#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int k;
    int x = 2;
    printf("Input Number : ");
    scanf("%d", &k);
    printf("Factoring Result :");
    while (k == 1) {
        printf("%d\n", k);
        break;
    }
    while (k != 1) {
        while (k % x == 0) {

           
            printf("%d", x);
            k = k / x;
            while (k == 1) {
                continue;
            }
            printf("x");

        }

        x++;
    }
 
    return 0;
}

