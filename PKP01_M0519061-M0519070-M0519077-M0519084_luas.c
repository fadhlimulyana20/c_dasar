#include <stdio.h>
#include <math.h>

int main(){
	//deklarasi variabel
	int jari2, panjang1, panjang2, lebar;
	float phi;
	
	phi = 3.14;
	
	//input data
	printf("Masukkan nilai jari-jari lingkaran\t:");
	scanf("%d", &jari2);
	
	printf("Masukkan nilai panjang persegi\t:");
	scanf("%d", &panjang1);
	
	printf("Masukkan nilai panjang persegi panjang\t:");
	scanf("%d", &panjang2);
	
	printf("Masukkan nilai lebar persegi panjang\t:");
	scanf("%d", &lebar);
	
	//menghitung luas
	float luas_lingkaran = phi*(pow(jari2,2));
	int luas_persegi = panjang1*panjang1;
	int luas_persegi_panjang = lebar*panjang2;
	
	//output data
	printf("Luas lingkaran\t:%.2f\n", luas_lingkaran);
	printf("Luas persegi\t:%d\n", luas_persegi);
	printf("Luas persegi panjang\t:%d\n", luas_persegi_panjang);
}
