#include <stdio.h>
int main(void){
    int i;
    i = 42; 
    while (i <= 1337){
        if (i % 2 == 0){
            printf ("%d ", i );
        }
        i = i + 1;
        
    }
    return 0;
}