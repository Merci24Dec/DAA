#include<stdio.h>
#include<conio.h>
void merge_sort(int [],int ,int );
void merge(int [],int ,int ,int );
int arr[30];
int main()
{
int a,i;
printf("\n Enter no of elements:-\n");
scanf("%d",&a);
printf("Enter your elements:-\n");
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
merge_sort(arr,0,a-1);
printf("Here the sorted elements are:-\n");
for(i=0;i<a;i++)
{
printf("%d",arr[i]);
}
return 0;
}
void merge_sort(int arr[],int p,int r)
{
int q;
if(p<r)
{
q=p+(r-p)/2;
merge_sort(arr,p,q);
merge_sort(arr,q+1,r);
merge(arr,p,q,r);
}
}
void merge(int arr[],int p,int q,int r)
{
int i,j,k;
int n1=q-p+1,n2=r-q;
int L[n1],R[n2];
for(i=0;i<n1;i++)
{
L[i]=arr[p+1];
}
for(j=0;j<n2;j++)
{
R[j]=arr[q+1+j];
}
i=0;
j=0;
k=p;
while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
arr[k]=L[i];
i++;
}
else
{
arr[k]=R[j];
j++;
}
k++;
}
while(i<n1)
{
arr[k]=L[i];
i++;
k++;
}
while(j<n2)
{
arr[k]=R[j];
j++;
k++;
}
}
