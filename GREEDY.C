#include<stdio.h>
int str[30],fin[30];
void greedy_activity_selector(int str[],int fin[],int n)
{
  int j=0,i;
  printf("These are the selected activites:-\n");
    printf("%d",j);
   for(i=1;i<n;i++)
    {
      if(str[i]>=fin[j])
        {printf("%d",i);
        j=i;}
    }
}
int main()
{
  int n,i;
 printf("Enter the no of activities:-\n");
  scanf("%d",&n);
 printf("Enter starting time of each activity:-\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&str[i]);
   }
 printf("Enter finishing time of each activity:-\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&fin[i]);
   }
 greedy_activity_selector(str,fin,n);
 printf("\n");
 return 0;
}