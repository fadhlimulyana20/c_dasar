#include <stdio.h>
#include <math.h>

int main(){
	float phi, radius;
	int panjang1, lebar1, tinggi1, panjang2, lebar2, tinggi2;
	
	phi = 3.14;
	
	//input data
	printf("Masukkan nilai radius\t:");
	scanf("%f", &radius);
	
	printf("Masukkan nilai panjang1\t:");
	scanf("%d", &panjang1);
	
	printf("Masukkan nilai lebar1\t:");
	scanf("%d", &lebar1);
	
	printf("Masukkan nilai tinggi1\t:");
	scanf("%d", &tinggi1);
	
	printf("Masukkan nilai panjang2\t:");
	scanf("%d", &panjang2);
	
	printf("Masukkan nilai lebar2\t:");
	scanf("%d", &lebar2);
	
	printf("Masukkan nilai tinggi2\t:");
	scanf("%d", &tinggi2);
		
	//menghitung nilai volum bola
	float volume_bola = (4*phi*(pow(radius, 3)))/3;
	int volume_balok = panjang1*lebar1*tinggi1;
	int volume_limas = (panjang2*lebar2*tinggi2)/3;
	
	//output data
	printf("Volume Vola\t: %.2f\n", volume_bola);
	printf("Volume balok\t:%d\n", volume_balok);
	printf("Volume limas\t:%d\n", volume_limas);
}
