#include <stdio.h>

int main(){
	int alas, tinggi, panjang1, panjang2, lebar, radius;
	float phi = 3.14;
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
	printf("Masukkan nilai jari-jari\t:");
	scanf("%d", &radius);

	//output data
	int luas_segi3 = alas*tinggi/2;
	int luas_persegi = panjang1*panjang1;
	int luas_persegi_panjang = lebar*panjang2;
	float volume_lingkaran = (4/3)*phi*(radius*radius*radius);


	//print data
	printf("Luas segitiga\t:%d\n", luas_segi3);
	printf("Luas persegi\t:%d\n", luas_persegi);
	printf("Luas persegi panjang\t:%d\n", luas_persegi_panjang);
	printf("Volum Balok\t:%.2f", volume_lingkaran);

}
