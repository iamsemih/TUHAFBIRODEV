#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
// SEMIH
int main()
{
	
	// 9^2=81 => 8+1=9  ||  45^2=2025 => 20+25=45 || 7777^2=60481729 => 6048+1729=7777 BU GIBI SAYILARI BULAN PROG.
	A10:
	int sayi, temp, buBasamak=0, ilkYarimSayi=0, ikinciYarimSayi=0, basamaginYarisi=0, basamakSayisi=0, topp=0, karesi=0;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	if (sayi<10){
		cout << "Basamak sayisi cift ve pozitif olmalidir" << endl;
		goto A10;
	}
	temp=sayi;
	while (temp>0){
		temp=temp/10;
		basamakSayisi++;
	} // basamakSayisi bulundu
	int dizi[basamakSayisi];
	temp=sayi;
	if (basamakSayisi%2==0){
		//isleme Devam
		for (int i=0; i<basamakSayisi; i++){	// girilen sayinin her bir rakamini dizinin icne attim
			buBasamak=(basamakSayisi-i)-1;
			dizi[i]=temp/(pow(10,buBasamak));
			temp=temp-(dizi[i]*pow(10,buBasamak));
			/* cout << dizi[i] << " ";	// KONTROL AMACLI YAZDIRMA ISLEMI*/
		}	// BURAYA KADAR BASAMAK SAYISINI BULUP HER BIR KASAMAKTAKI RAKAMLARI DIZIYE ATMAYI BASARDIM
		basamaginYarisi=basamakSayisi/2;
		cout << "\n\n\n\n";
		for (int m=0; m<basamaginYarisi; m++){
			ilkYarimSayi=ilkYarimSayi+dizi[m]*pow(10,basamaginYarisi-m);	
		}
		ilkYarimSayi=ilkYarimSayi/10;	// ARTIK ILKYARIM SAYIYI ALDIM
		cout << "ilk y s =    " << ilkYarimSayi << endl;
		ikinciYarimSayi=sayi-ilkYarimSayi*pow(10,basamaginYarisi); // ARTIK IKINCIYARIM SAYIYI ALDIM
		cout << "ikinci y s =    " << ikinciYarimSayi << endl << endl << endl;
		topp=ilkYarimSayi+ikinciYarimSayi;
		karesi=pow(topp,2);
		if(karesi==sayi){
			cout << ilkYarimSayi << " + " << ikinciYarimSayi << " = " << topp << endl;
			cout << topp << "ý = " << sayi << endl << endl;
			cout << sayi << " sayisi bir tuhaf sayidir.";
			getch();
			return 0;
		}else{
			cout << sayi << " sayisi bir tuhaf sayi degildir.";
			getch();
			return 0;
		}
	}else{
		cout << "Basamak sayisi cift olmalidir" << endl;
		goto A10;
	} // CIKIS
}
