#include <unistd.h>
int main(void){
    int number;
    int i;

    number = 8; 
    i = 0;
    while(i < number) {
        write(1,"Hello\n",6); 
        i = i + 1; 
    }
    return 0; 
}