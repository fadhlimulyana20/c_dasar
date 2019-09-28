#include <stdio.h>
#include <math.h>
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
}