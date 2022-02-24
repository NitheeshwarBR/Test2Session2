#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the Number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0,b=1,sum;
  for(int i=1;i<n;i++)
    {
      sum=a+b;
      a=b;
      b=sum;
    }
  return a;
}
void output(int n,int fibo)
{
  printf("The %dth fibonacci series is %d\n",n,fibo);
}
int main()
{
  int x,res;
  x=input();
  res=find_fibo(x);
  output(x,res);
  return 0;
    
    
}