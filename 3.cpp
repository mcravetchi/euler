#include <iostream>
bool isPrime(long int term);
int main(){
  long int num = 600851475143;
  long int div = 2;
  while(num!=1){
    if(isPrime(div)){
      if(num%div == 0){
	num/=div;
      }
    }
    div++;
  }
  std::cout<<div-1<<std::endl;
  return 0;
}

bool isPrime(long int term){
  long int it = 2;
  bool isPrime = true;
  while(it*it <= term){
    if(term%it==0){
      isPrime = false;
      break;
    }
    it++;
  }
  return isPrime;
}
