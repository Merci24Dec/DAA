#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,l=0,h=10,m,n;
printf("enter the elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be searched\n");
scanf("%d",&n);
for(i=0;i<10;i++)
{
m=(l+h)/2;
}
if(n>a[m])
h=m;
else if(n<a[m])
l=m;
else if(n==a[m])
printf("element exists at %d",m);
else
printf("Not found");
}






