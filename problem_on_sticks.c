#include<stdio.h>
#include<stdlib.h>

int compare(const void* a,const void* b)
{
    int A= *((int*) a);
    int B= *((int*) b);
    return (A-B);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d\n",&n);
        int a[100001]={0};
        int count=0;
        int q=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        qsort(a,n,sizeof(int),compare);
       for(int k=0;k<n;k++)
       {
           if(a[k]<a[k+1])
           {
               q++;
           }
       }
       if(a[0]==0)
       {
           printf("%d\n",q);
       }
       else
       {
           printf("%d\n",(q+1));
       }
       
    }
}