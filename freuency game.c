[7:42 PM, 10/2/2020] Rohit 235 IT-4: #include <stdio.h>
int freq(int a[],int n);

int main(void) {
  int m,n;
  int result;
  printf("Enter Number Of Array\n");
  scanf("%d",&m);
 

  for(int i=0;i<m;i++)
  {
     printf("Enter Elements Of Array\n");
     scanf("%d",&n);
     int a[n];

    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[j]);
    }
    result=freq(a,n);
    printf("%d",result);
  }
   return 0;
}

int freq(int a[],int n)
{
  int b[10]={0};
  int c[n];
  for(int i=0;i<n;i++)
  {
    c[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    b[a[i]]++;
  }

  for(int i=0;i<10;i++)
  {
    if(b[i]>0)
    {
    c[b[i]]++;
    }
  }

  int max=c[0];
  int j;
  for(int i=0;i<n;i++)
  {
    if(c[i]>max)
    {
    max=c[i];
    j=i;
    }
  }
  
  for(int i=0;i<n;i++)
  {
    if(c[i]==max && i<j )
    {
      max=c[i];
      j=i;
    }
  }
return j;

}