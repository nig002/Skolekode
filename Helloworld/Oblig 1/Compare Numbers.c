#include <stdio.h>
void compare_values(int x, int y){ 
    if(x > y)
        printf("%i is greater than %i \n", x, y);
    else if(x < y)
        printf("%i is not greater than %i \n",x,y);
    else
    printf("%i is equal to %i\n", x, y);

}
int main() {
    int x, y;

    x = 2222;
    y = 223;
// gitt verdi til 2 heltall 
// main - funksjoner: der programmet starter fra.
compare_values(x, y);
   
        
    return 0;

}


