#include <stdio.h>
#include <conio.h>
#include <math.h>
# define n 1e5
float a,b,h,y,x,tp;
long int i;
void main()
{
	printf("CHUONG TRINH TICH PHAN CUA HAM THEO PHUONG PHAP HINH THANG");
	printf("\n y=x^2+2");
	printf("\n can lay tich phan:");
	printf("\n can duoi:");
	scanf("%f",&a);
	printf("\n can tren:");
	scanf("%f",&b);
	h=(b-a)/n;
	tp=0;
	for (i=1;i<=n-1;i++)
	{
	x=a+h*i;
	tp=tp+pow(x,2)+2;
	}
	tp=2*tp;
	tp=tp+pow(a,2)+pow(b,2)+4;
	tp=h*tp/2;
	printf("\n %4.3f",b);
	printf("\n tich phan cua ham =%5.3f",tp);
	printf("\n ");
	printf("\n %4.3f",a);
}
