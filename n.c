#include<stdio.h>
int main()
{
int i;int array[10];
for(i=0;i<=10;i++)
{
printf("Enter the array elements:");
scanf("%d",&array[i]);
}
for(i=0;i<=10;i++)
if(array[i]==5)
printf("You have entered:%d\n",&array);
return 0;
}
