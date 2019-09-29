#include <stdio.h>
#include <math.h>
#include <string.h>
#define pi 3.14

int main(){
    double x, y, r, sin;
    double result, val;
    
    printf("Nilai x\t:");
    scanf("%lf", &x);

    printf("Nilai y\t:");
    scanf("%lf", &y);

    r = pow(((x*x)+(y*y)), 0.5);
    sin = y/r;
    val = 180/pi;
    result = asin(sin)*val;
    
    printf("Inverse of sin(%.2f) = %.2lf in degrees\n", sin, result);

    char arah[12];

    if (x>0 && y==0){
        strcpy(arah, "Timur");
    }else if (x>0 && y>0){
        strcpy(arah, "Timur_Laut");
    }else if (x == 0 && y>0){
        strcpy(arah, "Utara");
    }else if (x<0 && y>0){
        strcpy(arah, "Barat_Laut");
    }else if (x<0 && y==0){
        strcpy(arah, "Barat");
    }else if (x<0 && y<0){
        strcpy(arah, "Barat_daya");
    }else if (x==0 && y<0){
        strcpy(arah, "Selatan");
    }else if (x>0 && y<0){
        strcpy(arah, "Tenggara");
    }

    printf("Arah gerak vektor %s\n", arah);
}