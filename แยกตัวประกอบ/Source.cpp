#include <stdio.h>

//edit 1    26/08/2563  23:39 
//edit 2     2/09/2569  16:41
int main() {
    long int k;
    int x = 2;
    printf("Input Number : ");
    scanf_s("%d", &k);
    printf("Factoring Result : ");
    while (k == 1) {
        printf("%d\n", k);
        break;
    }
    while (k != 1) {
        while (k % x == 0) {

         
            printf("%d", x); 
            printf("x");
            
           
            
            k = k / x;
             while (k == 1) {
                printf("\b");
                return 0;
            }
            
        }

        x++;
        
    }
 
    return 0;
}

