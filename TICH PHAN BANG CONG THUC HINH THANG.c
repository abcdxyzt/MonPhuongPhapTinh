#include <stdio.h>
#include <conio.h>
#include <math.h>
# define n 1e5
float a,b,h,y,x,tp;
long int i;
void CongThucHinhThang();

void CongThucHinhThang()
{
	printf("CHUONG TRINH TICH PHAN CUA HAM THEO PHUONG PHAP HINH THANG CHO HAM SO:");
	printf(" y=x^2+2");
	printf("\n Hay nhap cac can cua tich phan");
	printf("\n Nhap can duoi a =  ");
	scanf("%f",&a);
	printf("\n Nhap can tren b =  ");
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
	printf("\n Can duoi cua tich phan la: %f", a);
	printf("\n Can tren cua tich phan la: %f", b);
	printf("\n Dap an cua tich phan  bang: %5.3f", tp);
	printf("\n ");
}

void main()
{
	while(1)
	{
		CongThucHinhThang();
	}
}
