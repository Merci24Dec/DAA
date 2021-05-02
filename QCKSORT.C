#include<stdio.h>
#include<conio.h>
int a[50];
int partition(int a[],int p,int r)
{
int x,i,j,temp1,temp2;
x = a[r];
i=p-1;
for(j=p;j<r;j++)
{
if(a[j]<=x)
{
i=i++;
temp1=a[i];
a[i]=a[j];
a[j]=temp1;
}
}
temp2=a[i+1];
a[i+1]=a[r];
a[r]=temp2;
return i+1;
}
void quicksort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=partition(a,p,r);
quicksort(a,p,q-1);
quicksort(a,q+1,r);
}
}
void main()
{
int i,n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf("sorted elements are :");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}
