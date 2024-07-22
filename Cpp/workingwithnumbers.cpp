#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int wnum = 5; //whole no
  double dnum = 6.6; //decimal no

  wnum++;
  dnum--;
  std::cout << wnum << "\n";
  std::cout << pow(2,5) << "\n";
  std::cout << sqrt(35) << "\n";
  std::cout << round(4.6) << "\n"; //round up
  std::cout << floor(4.6) << "\n"; //round down
  std::cout << fmax(3, 10) << "\n"; //print which is biggest number among them
  std::cout << fmin (3,10) << "\n"; //minimum

  return 0;
}
