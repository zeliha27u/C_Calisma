#include <stdio.h>
//Global Degisken (Her yerden erisebilir)
int x = 100; 

//Fonksiyon: Hem pointer aliyor, hem normal degisken
void fonksiyon(int *ptr, int x){
    *ptr = *ptr + 10; // Pointer'in isaret ettigi yeri (Main'deki y) degistirir
    x = x + 50;       // Sadece fonksiyonun icindeki 'x' kopyasini degistirir
    printf("Fonksiyon Ici: %d %d\n", *ptr, x);
}

int main(){
    int y = 20; // Yerel Degisken
    int x = 5;  // Yerel Degisken (Bu 'x', Global 'x'i golgeler/saklar)
    
    // Fonksiyona y'nin ADRESINI ve x'in DEGERINI gonderiyoruz
    //unutma poiner, adres tutar
    fonksiyon(&y, x);
    
    printf("Main Ici: y=%d, x=%d, Global=%d", y, x, 100); 
}
