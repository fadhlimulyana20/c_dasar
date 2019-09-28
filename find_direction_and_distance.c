#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){
    double x, y, x1, y1, r, sin;
    double result, val;
    
    printf("Nilai x\t:");
    scanf("%lf", &x);

    printf("Nilai y\t:");
    scanf("%lf", &y);

    printf("Nilai x1\t:");
    scanf("%lf", &x1);

    printf("Nilai y1\t:");
    scanf("%lf", &y1);

    r = pow((((x-x1)*(x-x1))+((y-y1)*(y-y1))), 0.5);
    sin = (y-y1)/r;
    val = 180/pi;
    result = asin(sin)*val;

    printf("THe distance is %.2lf in point\n", r);
    printf("Inverse of sin(%.2f) = %.2lf in degrees\n", sin, result);
}