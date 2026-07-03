#include <stdio.h>

int main(){
    int toplam=0;
    for(int i=1; i<=10;i++){
        toplam = toplam + i;
    }
    printf("Toplam = %d\n", toplam);
}