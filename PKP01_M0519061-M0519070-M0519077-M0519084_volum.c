#include <stdio.h>
#include <math.h>

int main(){
	float phi, radius;
	
	phi = 3.14;
	
	//input data
	printf("Masukkan nilai radius\t:");
	scanf("%f", &radius);
	
	//menghitung nilai volum bola
	float volum_bola = (4*phi*(pow(radius, 3)))/3;
	
	//output data
	printf("Nilai Volum Vola\t: %.2f", volum_bola);
	
}
