#include <stdio.h>
/*Dosya Okuma*/
int main() {
    FILE *dosya = fopen("notlar.txt", "r");

    if (dosya == NULL) {
        printf("Dosya bulunamadi!\n");
        return 1;
    }

    char satir[100];
    while (fgets(satir, 100, dosya) != NULL) {
        printf("%s", satir);
    }

    fclose(dosya);
    return 0;
}