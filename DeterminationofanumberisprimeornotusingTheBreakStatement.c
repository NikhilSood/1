#include<stdio.h>
int main()
{
int i,num;

printf("Enter a num;");
scanf("%d",&num);

i=2;
while(i<=num-1)
{
    if(num%i==0)
    {
printf("Not a prime no.\n");
break;
    }
    i++;
}
if(i==num)
    printf("Prime number\n");
return 0;
}
