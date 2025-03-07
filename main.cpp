#include <iostream>

std::string reverse(std::string s){
  int size = s.size();
  char temp;
  for(int i = 0, j = size - 1; i < j; i++, j--){
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
  return s;
}

int main(){
  std::string s = "hello, welcome to my git hub";
  std::cout << s << '\n';
  std::string s2 = reverse(s);
  std::cout << s2 << '\n';
}
