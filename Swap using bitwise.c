#include<stdio.h>
void main()
{
int a,b;
printf("Enter the numbers:");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("%d\t%d",a,b);
}
