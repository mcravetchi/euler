#include <iostream>
bool isPalindrome(int term);
int main(){
  int fin = 0;
  for(int i = 999; i >= 100; i--){
    for(int j = 999; j >= 100; j--){
      int num = i*j;
      if(isPalindrome(num) && fin < num){
	fin = num;
      }
    }
  }
  std::cout<<fin<<std::endl;
  return 0;
}
bool isPalindrome(int term){
  int og = term;
  int sym = 0;
  while(term > 0){
    sym = (sym*10) + (term%10);
    term/=10;
  }
  if(sym == og){
    return true;
  }
  else{
    return false;
  }
}
