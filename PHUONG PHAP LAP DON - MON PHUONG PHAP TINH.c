// Phuong phap lap don:

#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define eps 0.0001
 
float tinh_ham(float x)
{
     
    return pow(x + 1, 1.0 / 3);
}
 
int main()
{
    float x, y;
    printf("\n Hay nhap gia tri x = ");
    scanf("%f", &x);
    do 
	{
        y = x;
        x = tinh_ham(x);
        
        printf(" \n%.3f\t%.3f", x, y);
    }
    while (fabs(x - y) > eps);
     
    printf("\n\n Nghiem gan dung cua phuong trinh la: %f", x);
    return 0;
}
