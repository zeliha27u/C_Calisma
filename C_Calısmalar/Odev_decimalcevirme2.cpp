#include<stdio.h>
#include<math.h>
//Decimak(Onlu Sistem):Gunluk hayatta kulanilan sistem.
//her seyi 10'ar 10'ar ayrilir
//10^0(Birler),10^2(Onlar),10^2(Yuzler),...
//Ornek:123->1*100+2*10+3*1=123

//Octal (Sekizli Sistem):Bilgisayar dunyasinda kulanila sistem
//her seyi 8'er 8'er ayrilir
//8^0(Birler),8^1(Sekizler),8^2(Altmisdortler),...
//Ornek:83->1*64+2*8+3*1=83

//fonksiyonu olusturma
int OctalDCevirme(int sayi){
	int decimalsayi=0, i=0;
	while(sayi>0){
		//son basamigi almak icin
		int kalan =sayi%10;
		//formule gore hesapla ve ata
		decimalsayi= decimalsayi + (kalan * pow(8, i));
		//us artir, sayiyi kucult
		i++;
		sayi = sayi/10; //Son basamigi elde ettik ondan son basamgi at
	}
	//sonucu geri dondur
	return decimalsayi;
}

//main kismi
main(){
	int girilenSayi;
	printf("Octal (8'lik) tabamda bir sayi giriniz=");
	scanf("%d", &girilenSayi);
	//fonksiyon cagirma ve sonuc alma
	int sonuc = OctalDCevirme(girilenSayi);
	//yazdirma
	printf("Octal %d sayisinin Decimal karsiligi = %d", girilenSayi, sonuc);		
}


