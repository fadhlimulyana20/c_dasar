#include<stdio.h>
#include<math.h>

int main(){
	int x1, y1, x2, y2;
	char re='y';
 while(re=='y'){
 		printf("Menentukan titik pusat\n");
	printf("Nilai x1\t:");
	scanf("%d", &x1);
	printf("Nilai y1\t:");
	scanf("%d", &y1);
	
	printf("\nMenentukan titik yang akan diukur jaraknya\n");
	printf("Nilai x2\t:");
	scanf("%d", &x2);
	printf("Nilai y2\t:");
	scanf("%d", &y2);
	
	float jarak = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
	printf("\nJarak antara kedua titik\t: %.2f\n", jarak);	
	
		if ((x2-x1)>0 && (y2-y1)>0){
	printf("Arah\t: Timur laut");	
	}
	else if ((x2-x1)>0 && (y2-y1)<0){
		printf("Arah\t: Tenggara");
	}
	else if ((x2-x1)<0 && (y2-y1)>0){
		printf("Arah\t: Barat laut");
	}
	else if ((x2-x1)<0 && (y2-y1)<0){
		printf("Arah\t: Barat Daya");
	}
	else if ((x2-x1) == 0 && (y2-y1)>0){
		printf("Arah\t: Utara");
	}
	else if ((x2-x1)==0 && (y2-y1)<0){
		printf("Arah\t: Selatan");
	}
	else if ((x2-x1)>0 && (y2-y1)==0){
		printf("Arah\t: Timur");
	}
	else if ((x2-x1)<0 && (y2-y1)==0){
		printf("Arah\t: Barat");
	}
	
	printf("\nMencoba lagi (y/n)? ");
	scanf("%s", &re);

 }
 
}
