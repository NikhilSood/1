#include<stdio.h>
int areaperi(int r,float *a,float *p);
int main()
{
int radius;
float area,peri;
printf("Enter the radius:");
scanf("%d",&radius);
areaperi(radius,&area,&peri);
printf("AREA:%f\n",area);
printf("PERI:%f\n",peri);
return 0;
}
int areaperi(int r,float *a,float *p)
{
*a=3.14*r*r;
*p=2*3.14*r;
}
