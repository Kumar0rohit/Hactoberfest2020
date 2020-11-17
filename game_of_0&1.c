#include<stdio.h>
#include<stdlib.h>
void sort(int b[],int n)
{
 int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = b[i]; 
        j = i - 1; 
  
        while (j >= 0 && b[j] > key) { 
            b[j + 1] = b[j]; 
            j = j - 1; 
        } 
        b[j + 1] = key; 
    } 
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {

        int n,count=0,max=0;
        scanf("%d",&n);
        int *b;
        b = (int*) calloc(n,sizeof(int));     
        int *a;
        a = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]==0 && a[k+1]!=0 && a[k-1]!=0)
        {
            b[k]=1;
        }
        else if(a[k]==1)
        {
        b[k]=0;
        }
        else
        {
        int q=0;
        while(a[k]==0 && a[k+1]==0)
        {
            q++;
        }
        b[k]=q+1;
        k=k+q;
        }
    }
   sort(b,n);
   max=b[n-1]; 
   
    if(max==1)
    {
        printf("win\n");
        break;
    }
    if(max%2!=0)
    {
    for(int v=0;v<n;v++)
    {
        if(b[v]>=(max/2))
        {
         printf("loss\n");
         break;
        }
        if(b[v]==max)
        {
            printf("win\n");
        }
    }
    }
    else
    printf("loss");    
    }
    return 0;
}
       
