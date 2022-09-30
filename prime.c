#include <stdio.h>

int main()
{
  int n,c=0;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    if(n%i==0)
      c++;
  }
  if(c>2)
    printf("The given integer is a prime number");
  else
    printf("The given integer is a composite number");
  return 0;
}
