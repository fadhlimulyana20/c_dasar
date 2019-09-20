#include<stdio.h>

int main (){
	
	char nama[15];
	char nim[8];
	char umur[2];
	char univ[20];
	
	printf("Masukkan nama\t:");
//	scanf("%s", &nama);
	gets(nama);
	printf("Masukkan nim\t:");
//	scanf("%s", &nim);
	gets(nim);
	printf("Masukkan umur\t:");
//	scanf("%s", &umur);
	gets(umur);
	printf("Masukkan univ\t:");
//	scanf("%s", &univ);
	gets(univ);
	
	printf("Nama\t: %s\n", nama);
	printf("NIM\t: %s\n", nim);
	printf("Umur\t: %s\n", umur);
	printf("Universitas\t: %s\n", univ);	
	

	}

