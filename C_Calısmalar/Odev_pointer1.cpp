#include <stdio.h>

void boslukSil(char *dizi) {
    // Iki tane pointer tanimliyoruz: Biri okuyacak, biri yazacak.
    
    char *okuyan = dizi; // Sadece amac ne oldugunu anlamak, hizla ilerler(tavsan gibi)
    char *yazan = dizi;  // Sadece harf bulunca ilerler, amac harf (kaplumbaga gibi)
    
    // Okuyan pointer cumlenin sonuna (\0) gelene kadar don
    // (\0) string sonuna koyulur

    while (*okuyan != '\0') {
        
        // Eger okudugum karakter bosluk DEGILSE
        if (*okuyan != ' ') {
            
            // Okudugum degeri, yazanin oldugu yere kopyala
            *yazan = *okuyan;
            
            // Yazani bir adim ileri tasi (Cunku orasi doldu)
            yazan++;
        }
        
        // Okuyan her turda mutlaka ilerlemeli (Bosluk olsa bile gecmeli)
        okuyan++;
    }
    
    // FINAL: Yeni cumlenin bittigi yere "Bitis Karakteri"ni koy
    *yazan = '\0';
}

main(){
	char metin[100];
	printf("Bosluk silmek istedigin metni gir=");
	gets(metin);
    
    boslukSil(metin); // Fonksiyon cagirma. adres gonderme
    
    printf("\nSon hali : %s",metin);//dizi bir adres tutucudur & gerek yok
    return 0;
}
