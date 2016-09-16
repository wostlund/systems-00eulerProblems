#include <stdio.h>
#include< stdlib.h>

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
