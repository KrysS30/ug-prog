#include <stdio.h>
int main(void){
    int calcul;
    int i;
    calcul = 0;
    i = 0;
    while (i<= 1000) {
        calcul = calcul + i; 
        i = i + 1; 
    }
    printf("%d ", calcul);
    return 0;

}