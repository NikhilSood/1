#include<stdio.h>
int fn(int *);
int main()
{
int i;
int marks[]={1,1,1,1,1,1,1};
for(i=0;i<=6;i++)
fn(&marks[i]);
return 0;
}
int fn(int *m)
{
printf("The value is:%d\n",*m);
}
