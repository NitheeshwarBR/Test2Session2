  #include<stdio.h>
int input_number()
{
  int n;
  printf("Enter The Number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int prime=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      prime++;
    }
    
  }
  return prime;
}
void output(int n,int is_prime)
{
  if(is_prime==2)
  {
    printf("%d is a prime number\n",n);
  }
  else{
    printf("%d is not a prime number\n",n);
  }
}
int main()
{
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}
