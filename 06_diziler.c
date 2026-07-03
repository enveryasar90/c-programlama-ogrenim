#include <stdio.h>

int main(){
    int toplam = 0;
    int sayilar[5]= {23, 45, 32, 58, 6};
    for (int i = 0; i<5 ; i++){
        printf("Sayi %d: %d\n",i, sayilar[i]);
        toplam = toplam + sayilar[i];
    }
    printf("Toplam %d\n", toplam);
}