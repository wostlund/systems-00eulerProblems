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

int thousandFib(){
  double x = 1;
  double y = 2;
  double i = 2;
  int ans = 3;
  int digs = 1;
  while (digs < 1000){
    i = x + y;
    if (i > 10){
      i/=10;
      digs++;
    }
    x = y;
    y = i;
    ans++;
  }
  return ans;
}


int main(){
  printf("%d \n", sumThreeFive(1000));
  printf("%d \n", evenFibs());
  printf("%d \n", thousandFib());
  return 0;
}
