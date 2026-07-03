#include <stdio.h>
void ikiyeBol(int *sayi){
    *sayi= *sayi / 2;
}
int main(){
    int x = 40;
    ikiyeBol(&x);
    printf("x: %d\n",x);
    return 0;
}
