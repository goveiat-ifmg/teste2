#include<stdio.h>

int main(){
  int n;
  printf("Informe um número\n");
  scanf("%d", &n);
  printf("%d", !(n % 2));
  return 0;
}
