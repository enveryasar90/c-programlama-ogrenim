#include <stdio.h>
/*Dosya Oluşturma*/
int main() {
    FILE *dosya = fopen("notlar.txt", "w");

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    fprintf(dosya, "Not1: %d\n", 75);
    fprintf(dosya, "Not2: %d\n", 88);
    fprintf(dosya, "Not2: %d\n", 60);

    fclose(dosya);
    printf("Yazma tamamlandi.\n");

    return 0;
}
