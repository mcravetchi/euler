#include <iostream>
int main(){
  int prev= 1;
  int curr= 2;
  int next;
  int sum = 2;
  while(true){
    if(curr >= 4000000){
      break;
    }
    next = prev + curr;
    prev = curr;
    curr = next;
    if(curr%2 == 0){
      sum+=curr;
    }
  }
  std::cout<<sum<<std::endl;
  return 0;
}
