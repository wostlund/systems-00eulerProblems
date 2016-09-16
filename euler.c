#include <stdio.h>
#include <stdlib.h>

int sumThreeFive(int x){
  int i;
  int ans = 0;
  for(i = 0; i<x; i++){
    if(i%3 == 0 || i%5 == 0){
      ans += i;
    }
  }
  return ans;
}

int evenFibs(){
  int x = 1;
  int y = 2;
  int i = 2;
  int ans = 0;
  while (i < 4000000){
    i = x + y;
    if (i%2 == 0){
      ans += i;
    }
    x = y;
    y = i;
  }
  return ans;
}

int main(){
  printf("%d \n", sumThreeFive(10));
  printf("%d \n", evenFibs());
}
