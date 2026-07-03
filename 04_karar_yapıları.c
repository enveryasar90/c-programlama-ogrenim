#include <stdio.h>
/*Üniversite not hesaplama*/
int main(){
    int vize=42;
    int final=73;
    float vizeort=(float)(vize * 40)/100;
    float finalort=(float)(final* 60)/100;
    float notu=(float)vizeort + finalort;
    if (notu >= 60.00){
    printf("Gectin: Notun %.2f\n", notu);
    }
    else{
    printf("Kaldin: Notun %.2f\n", notu);
    }  
    return 0;
}