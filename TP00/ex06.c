#include <stdio.h>

int main(void){
    int age; 
    age = 67;
    if (age <= 1)
    {
        printf("bonjour bébé !");
    }
    else if (age <= 14)
    {
        printf("bonjour mes petits ! ");
    }
    else if (age <= 30)
    {
        printf("bonjour jeune fille !");
    }
    else if ( age <= 60)
    {
        printf("bonjour madame !");
    }
    else 
    {
        printf("bonjour mamie");
    }
}