#include <stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}

void ets(int n, int a[n])
{
   int i=0;
   while(i<=sqrt(n)) {
   while(a[i] == 0) i++;
   for(int k = i+i; k < n ; k+=i)
     a[k]=0;
   i++;
     }
}
void output(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d ",a[i]);   
        }
    }
  printf("\n");
}
int main()
{
  int x=input();
  int a[x];
  init_array(x,a);
  ets(x,a);
  output(x,a);
  return 0;
}
