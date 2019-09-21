#include<stdio.h>

int main (){
	
	char nama[20];
	char nim[8];
	char umur[2];
	char univ[20];
	
	printf("Masukkan nama\t:");
	gets(nama);
	
	printf("Masukkan nim\t:");
	gets(nim);
	
	printf("Masukkan umur\t:");
	gets(umur);
	
	printf("Masukkan univ\t:");
	gets(univ);
	
	printf("Nama\t\t: %s\n", nama);
	printf("NIM\t\t: %s\n", nim);
	printf("Umur\t\t: %s\n", umur);
	printf("Universitas\t: %s\n", univ);	
	

	}

