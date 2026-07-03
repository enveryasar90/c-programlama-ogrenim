#include <stdio.h>
/*pointer konusuna giriş*/
int main (){
    int puan = 50;
    int *p = &puan;
    printf ("Puanin degeri: %d\n",puan);
    printf ("Puanin adresi: %p\n", &puan);
    printf("Pointer'in tuttugu adres: %p\n", p);
    printf("Pointer uzerinden degere erisim: %d\n", *p);
    *p=100;
    printf("Yeni değer: %d\n",puan);
    /*acaba adresi değişiyor mu diye test ettim*/
    printf ("Puanin adresi: %p\n", &puan);
    printf("Pointer'in tuttugu adres: %p\n", p);
    printf("Pointer uzerinden degere erisim: %d\n", *p);
}