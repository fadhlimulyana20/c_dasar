#include <stdio.h>

int main(){
	//deklarasi variabel
	int alas, tinggi, panjang1, panjang2, lebar;
	
	//input data
	printf("Masukkan nilai alas\t:");
	scanf("%d", &alas);
	
	printf("Masukkan nilai tinggi\t:");
	scanf("%d", &tinggi);
	
	printf("Masukkan nilai panjang persegi\t:");
	scanf("%d", &panjang1);
	
	printf("Masukkan nilai panjang persegi panjang\t:");
	scanf("%d", &panjang2);
	
	printf("Masukkan nilai lebar persegi panjang\t:");
	scanf("%d", &lebar);
	
	//menghitung luas
	int luas_segi3 = alas*tinggi/2;
	int luas_persegi = panjang1*panjang1;
	int luas_persegi_panjang = lebar*panjang2;
	
	//output data
	printf("Luas segitiga\t:%d\n", luas_segi3);
	printf("Luas persegi\t:%d\n", luas_persegi);
	printf("Luas persegi panjang\t:%d\n", luas_persegi_panjang);
}
