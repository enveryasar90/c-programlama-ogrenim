#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 4;
    /*bellek ayırdım*/
    int *dizi = malloc(n * sizeof(int));
    /*dizi değerlerini döngü ile atadım*/
    for (int i = 0; i < n; i++) {
    dizi[i] = (i + 1) * (i + 1);
    }
    /*atanan değerleri döngü ile yazdırdım*/
    for (int i = 0; i < n; i++) {
    printf("dizi[%d] = %d\n", i, dizi[i]);
    }
    /*ayrılan belleği serbest bıraktım*/
    free(dizi);

}