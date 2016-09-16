#include <stdio.h>
#include <stdlib.h>

int sum3and5(){
  int x = 1000;
  int total = 0;
  while(x){
    if(x%3==0||x%5==0){
      total+=x;
    }
    x--;
  }
  return total;
}
/*
int smallestMult(){
  int x = 20;
  int curr = 0;
  while(x){
    if(
  }
}
*/
int main(){
  int x = sum3and5();
  printf("The sum is %d \n",x);
}
