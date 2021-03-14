//Loop pós loop

#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    while (x<=10){
        x++;
        printf("Estamos no primeiro loop %d\n",x);
        y = x;
        printf("------\n");
    }
    while (y>0){
        y--;
        printf("Estamos no segundo loop %d\n",y);
        printf("------\n");
    }
    return 0;
}
