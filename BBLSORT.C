#include<stdio.h>
int main()
{
int a[10],i,j,t;
printf("\n Input any ten numbers");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9-1;i++)
{
for(j=0;j<=9-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n the sorted elements are:");
for(i=0;i<=9;i++)
printf("\n%d",a[i]);
}

