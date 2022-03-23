#include <stdio.h>
int main() {
  int n, re = 0, rem;
  printf("Enter a four digit number : ");
  scanf("%d", &n);
  while (n != 0) {
    rem = n % 10;
    re = re * 10 + rem;
    n /= 10;
  }
  printf("Reversed number = %d", re);
  return 0;
}