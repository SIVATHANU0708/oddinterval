#include<stdio.h>
int main()
{
int low,high,value,i;
printf("enter two numbers(interval): ");
scanf("%d %d",&low,&high);
printf("even number between %d and %d interval:",low,high);
for(i=low;i<=high;i++)
{
value=i%2;
if(value!=0)
{
printf("%d",i);
}
}
return 0;
}
