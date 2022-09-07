// Tich phan
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);

float f(float x)
{
 return x*x+x;
}
int main()
{
      int n,i;
      float a,b,x,h,j;
      printf("\n Nhap can cua tich phan:");
      scanf("%f%f",&a,&b);
      printf("\n Nhap so n:   ");
      scanf("%d",&n);
      h=(b-a)/2*n;
      j=(f(a)+f(b))/2;
      for(i=1;i<=n-1;i++)
      j+=f(a+i*h);
      float k=h*j;
      printf("\n Nghiem cua tich phan: %f",k);
      return 0;
} 
