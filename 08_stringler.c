#include <stdio.h>
#include <string.h>
/*karakter dizileri alıştırması*/
int main(){
    char isim[20] = "Enver";
    char soyad[20] = "Yasar";
    strcat(isim, " ");
    strcat(isim, soyad);
    printf("Tam ad: %s\n", isim);
    printf("Tam Ad Uzunluğu: %d\n",strlen(isim));
    return 0;
}