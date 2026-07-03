#include <stdio.h>
/*Struct yani paketleme işlemini ilk denemem*/
struct Kitap {
    char ad[50];
    /*char karakterini 20 girdim ve hata aldım. Bunun üstüne bellek taşmasını önlemek için 50 sayısını yazdım*/
    char yazar[20];
    int sayfa;
};

int main(){
    struct Kitap veriler = {"İnsan Ne İle Yaşar","Tolstoy", 167};
    printf("Kitap İsmi: %s\n",veriler.ad);
    printf("Yazarin Adi: %s\n",veriler.yazar);
    printf("Sayfa Sayisi: %d\n",veriler.sayfa);
    return 0;
}