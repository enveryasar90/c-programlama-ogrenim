#include <stdio.h>
/*kare alma fonksiyonunu çağırıp 2 den 14 e kadar olan sayıların karesini aldım*/
int kare(int sayi){
    int sonuc = sayi * sayi;
    return sonuc;
}

int main(){
    int i = 2;
    while (i<=14){
            printf("Sayinin kendisi : %d --> sayinin karesi = %d\n", i ,kare(i));
        i = i + 2;
    }
    return 0;
}