#include<stdio.h>
int main()
{
int sum=0,avg,num,i;
int marks[29];
for(i=0;i<=29;i++)
{
printf("Enter the marks:");
scanf("%d",&marks[i]);
}
for(i=0;i<=29;i++)
sum=sum+marks[i];

avg=sum/30;
printf("The average is:%d",avg);
return 0;
}
