#include <stdio.h>

int main() {
    int start = 11;  
    int num = start; 

    for (int i = 1; i <= 5; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);  
            num++;               
        }
        printf("\n");  
    }

    return 0;
}