#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

//แก้ไขครั้งที่ 1    26/08/2563   เวลา  23:39 
int main() {
    int k;
    int x = 2;
    printf("Input Number : ");
    scanf("%d", &k);
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

