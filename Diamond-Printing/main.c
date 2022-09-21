#include<stdio.h>
#include<stdlib.h>

int main(){
  int num;
  scanf("%d",&num);
  while(num%2!=1){scanf("%d",&num);}
  for (int i=num/2+1;i>=1;i--){
    for (int space=i-1;space>0;space--){
      printf(" ");
    }
    for(int stars=1+(-2*(i-((num/2)+1)));stars>0;stars--){
      printf("*");
    }
    printf("\n");
  }
  for (int ii=num/2;ii>=1;ii--){
    for (int space2=num/2-(ii-1);space2>0;space2--){
      printf(" ");
    }
    for(int stars2=1+(2*(ii-1));stars2>0;stars2--){
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}
