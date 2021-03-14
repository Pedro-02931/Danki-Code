//3xloop

#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    while (x<=10){
        x++;
        if(y<4){
            while(y<10){
                y++;
        printf("Estamos no primeiro loop %d\n",y);
        printf("------\n");
            }
        }
        printf("Estamos no segundo loop %d\n",x);
        z = x;
        printf("------\n");
    }
    while (z>0){
        z--;
        printf("Estamos no terceiro loop %d\n",z);
        printf("------\n");
    }
    return 0;
}
