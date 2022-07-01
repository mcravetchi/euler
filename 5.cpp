/*
code is unnecessary:
we find the prime factorization of all #s 1-20
each p.f. has prime bases with exponent
keep track of the highest exponent for each prime base
take product of all primes, where primes are raised to respective max base
this is because of common divisors

code is made with intention of easy translation into nth general case (disregarding memory limitations)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
bool isPrime(int k);
int main(){
  std::unordered_map<int,int> max_power;
  for(int i = 2; i <= 20; ++i){
    if(isPrime(i)){
      max_power.emplace(i,1);
    }
  }
  for(int i = 1; i<=20; ++i){
    int temp = i;
    int j = temp;
    int pow = 0;
    while(temp!=1){
      if(temp%j==0 && isPrime(j)){
	temp/=j;
	pow++;
	if(pow>max_power[j]){
	  max_power[j] = pow;
	}
      }
      else{
	j--;
      }
    }
  }
  int fin = 1;
  for(auto& it: max_power){
    fin*=pow(it.first,it.second);
  }
  std::cout<<fin<<std::endl;
  return 0;
}
bool isPrime(int k){
  long int it = 2;
  bool isPrime = true;
  while(it*it <= k){
    if(k%it==0){
      isPrime = false;
      break;
    }
    it++;
  }
  return isPrime;
}
