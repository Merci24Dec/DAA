#include<stdio.h>
#include<conio.h>
void main()
{
int array[100],search,c,n;
printf("enter the number of elements in the array\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter a integer to search\n");
scanf("%d",&search);
for(c=0;c<n;c++)
{
if(array[c]==search)
{
printf("%d is present at the location%d\n",search,c++);
break;
}
}
if(c==n)
printf("%d is not present in any of the locations\n",search);
}


