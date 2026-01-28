#include <stdio.h>

int main() {
    // 1. Normal bir de?i?ken olu?tur (Oda ve Mu?teri)
    // 1. Create a normal variable (Room and Customer)
    int sayi = 10; 

    // 2. Bir Pointer olu?tur (Sadece adres tutar)
    // 2. Create a Pointer (Holds only address)
    // 'int *' demek: "Ben tamsay©¥lar©¥n adresini tutan bir pointer©¥m" demektir.
    // 'int *' means: "I am a pointer holding the address of integers".
    int *ptr; 

    // 3. Ba?lant©¥y©¥ Kur: Pointer'a 'sayi'n©¥n adresini ver
    // 3. Make the Connection: Give 'sayi's address to the Pointer
    ptr = &sayi; 

    printf("Degiskenin Degeri: %d\n", sayi); // Ekrana 10 yazar
    
    // Adresi yazd©¥rmak icin %p kullan©¥l©¥r (Hexadecimal kod)
    // %p is used to print the address (Hexadecimal code)
    printf("Degiskenin Adresi: %p\n", ptr);  
    
    // ADRESE G?T VE BAK (*ptr)
    // GO TO ADDRESS AND LOOK (*ptr)
    printf("Pointerin gosterdigi yerdeki deger: %d\n", *ptr); // Ekrana yine 10 yazar!

    return 0;
}
