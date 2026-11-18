#include <stdio.h> 

int main(void){
    int T;
    int heures;
    int restes;
    int minutes;
    int secondes;

    T = 59;
    heures = T / 3600;
    restes = T % 3600;
    minutes = restes / 60;
    secondes = restes % 60;
    printf("%d\n", heures);
    printf("%d\n", minutes);
    printf("%d\n", secondes);
    return 0;
}