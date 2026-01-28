#include<stdio.h>
//Notlari Gunceleyen Fonksiyon
void notlariGuncelle(int *dizi, int kisiSayisi , int ekPuan){
	int *ptr;
	//Adres mantigi ile sinir kontrolu yapmak
	//dizi + kisi sayisina kadar ilerler
	for(ptr = dizi; ptr<dizi + kisiSayisi;ptr++){
		*ptr = *ptr + ekPuan; //Puan ekleme asamasi
		//100 not siniri koru
		if(*ptr>100){
			*ptr = 100;
		}
	}
}

main(){
	//Ogrenci isim ve Not  dizi olusturma
	//C de string yoktur o yuzden *Ogrenciler[] diye tutuyoruz
	char *Ogrenciler[] = {"Serkan", "Zafer", "Gorkem", "Arif", "Abdulmelik"};
	int notlar[] = {95,89,87,88,87};
	int kisiSayisi = 5;
	int ekPuan = 15;
	printf("--- ZELIS HOCA'NIN SINIFI ---\n");
	//eski notlari yazdirmak icin bir dongu
	int i;
	printf("Eski Notlar: ");
	for(i=0; i<kisiSayisi; i++){
		printf("\n%s = %d", Ogrenciler[i], notlar[i]);
	}
	printf("\n");
	printf("\n");
	//fonksiyon cagirma
	notlariGuncelle(notlar, kisiSayisi, ekPuan);
	
	printf("Guncel Notlar: ");
	for(i=0; i<kisiSayisi; i++){
		printf("\n%s = %d", Ogrenciler[i], notlar[i]);
	}
}
