#include <stdio.h>
int main()
{
  int a,b,c;
  printf("\nenter the first value : ");
  printf("\nenter the second value : ");
  printf("\nenter the third value : ");
  scanf("%d,\n%d,\n%d",&a,&b,&c);
  if(a>b&a>c)
  {
    printf("%d",a);
  }
  else if(b>a&b>c)
  {
    printf("%d",b);
  }
  else
  {
    printf("%d",c);
  }

}