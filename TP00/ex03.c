#include <stdio.h> 

int main(void){
    int cote;
    int surface_carre;
    int perimetres_carre;
    cote = 8;
    surface_carre = cote * cote;
    perimetres_carre = cote * 4;
    printf("%d\n", surface_carre);
    printf("%d\n", perimetres_carre);
}