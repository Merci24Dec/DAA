#include<stdio.h>
void insertion(int [],int);
int arr[30];
int main()
{
int a,i;
printf("\nEnter number of elements:-\n");
scanf("%d",&a);
printf("Enter your elements:-\n");
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
insertion(arr,a-1);
printf("Here the sorted elements are:-\n");
for(i=0;i<a;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
void insertion(int arr[],int p)
{
int i,j,key;
for(i=1;i<=p;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
}
