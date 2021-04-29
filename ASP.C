#include<stdio.h>
#define N 10
int ffin;
int lfin;

void fastestway(int a1[],int a2[],int e1,int e2,int x1,int x2,int t1[],int t2[],int n,int l[][n])
{
        int f1[n],f2[n],i,j;
        f1[1]=e1+a1[1];
        f2[1]=e2+a2[1];
        for(j=2;j<=n;j++)
                {
                        if(f1[j-1]+a1[j]<=f2[j-1]+t2[j-1]+a1[j])
                        {
                                f1[j]=f1[j-1]+a1[j];
                                l[1][j]=1;
                        }
                        else
                        {
                                f1[j]=f2[j-1]+t2[j-1]+a1[j];
                                l[1][j]=2;
                         }
                         if(f2[j-1]+a2[j]<=f1[j-1]+t1[j-1]+a2[j])
                         {
                                f2[j]=f2[j-1]+a2[j];
                                l[2][j]=2;
                          }
                          else
                          {
                                f2[j]=f1[j-1]+t1[j-1]+a2[j];
                                l[2][j]=1;
                          }
                  }

            if(f1[n]+x1<=f2[n]+x2)
            {
                ffin=f1[n]+x1;
                lfin=1;
            }
            else
            {
                ffin=f2[n]+x2;
                lfin=2;
            }


            printf("the table l is");

             for(i=1;i<=2;i++)
        {
                for(j=2;j<=n;j++)
                         printf("%d\t",l[i][j]);
        printf("\n");
        }
        printf("\n\n");
} 


void printpath(int n,int l[][n])
{
        int i,j;
         i=lfin;
        printf("line %d at station %d",i,n);
        printf("\n");
        for(j=n;j>=2;j--)
        {
                i=l[i][j];
                n=n-1;
                printf("line %d at station %d",i,n);
                printf("\n");
        }
        printf("the optimal cost is %d",ffin);
        printf("\n");

} 

void main()
{
        int a1[N],a2[N],i,j,e1,e2,x1,x2,n,l[N][N],t1[N],t2[N];
        printf("enter the size for the no of stations\n");
        scanf("%d",&n);
        printf("enter activity times into a1\n");
        for(i=1;i<=n;i++)
                scanf("%d",&a1[i]);
        printf("enter activity times into a2\n");
        for(j=1;j<=n;j++)
                scanf("%d",&a2[j]);
        printf("enter e1\n");
        scanf("%d",&e1);
        printf("enter e2\n");
        scanf("%d",&e2);
        printf("enter x1\n");
        scanf("%d",&x1);
        printf("enter x2\n");
        scanf("%d",&x2);
        printf("enter transaction times into a1\n");
        for(i=1;i<=n-1;i++)
                scanf("%d",&t1[i]);
        printf("enter transaction times into t2\n");
        for(j=1;j<=n-1;j++)
                scanf("%d",&t2[j]);
        fastestway(a1,a2,e1,e2,x1,x2,t1,t2,n,l);
        printpath(n,l);
}