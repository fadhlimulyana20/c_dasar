#include<stdio.h>

int x, y;

int main (){

printf("Nilai x:");
scanf("%d", &x);

printf("Nilai y:");
scanf("%d", &y);

if (x==0 && y>0){
    printf("Arah\t: Utara");
}
else if (x>0 && y==0){
    printf("Arah\t: Timur");
}
else if (x==0 && y<0){
    printf("Arah\t: Selatan");
}
else if (x<0 && y==0){
    printf("Arah\t: Barat");
}
else if (x>0 && y>0){
    printf("Arah\t: Timur Laut");
}
else if (x>0 && y<0){
    printf("Arah\t: Tenggara");
}
else if (x<0 && y<0){
    printf("Arah\t: Barat Daya");
}
else if (x<0 && y>0){
    printf("Arah\t: Barat Laut");
}
}

