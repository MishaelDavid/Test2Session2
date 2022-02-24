#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int c=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++) 
  {  c = a;
    a = b;
    b = c + b;
  }
  return c;
}
void output(int n, int c)
{
  printf("The %dth fibonacci term is %d",n,c);
}
int main()
{
  int n,c;
  n=input();
  c=find_fibo(n);
  output(n,c);
  return 0;
}
