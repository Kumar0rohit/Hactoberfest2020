#include<stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main()
{
    int a[64][64]={0};
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int count=0;
        for(int i= n-1; i>0; i--){
        if(a[0][i] != i+1){
            for(int j = i; j>0; j--){
                swap(&a[0][j],&a[j][0]);
            }
            count++;
        }
        }
        printf("%d\n",count);
        }
}
       