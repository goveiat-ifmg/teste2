#include<stdio.h>

int main(){
  int n;
  printf("Informe um número\n");
  scanf("%d", &n);
  if(n % 2 == 0){
    printf("1");
  }else{
    printf("0");
  }
  return 0;
}
