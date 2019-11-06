#include<stdio.h>
int fn(int x,int y,int z);
int main()
{
int a,b,c,sum;
printf("Enter three no.s:\n");
scanf("%d%d%d",&a,&b,&c);
sum=fn(a,b,c);
printf("The sum is:%d",sum);

}
int fn(int x,int y,int z)
{
int j;
j=x+y+z;
return(j);
}

