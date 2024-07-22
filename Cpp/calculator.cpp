#include <iostream>
#include <cmath>

using namespace std; 
int main(){

  double num1;
  double num2;
  char ope;
  

  std::cout << "Enter Number 1: ";
  std::cin >> num1;
  std::cout << "Enter Number 2: ";
  std::cin >> num2;
  std::cout << "Choose Operator(+,-,*,/): ";
  std::cin >> ope;
  
  if (ope == '+'){
    std::cout << num1 + num2;
   }
   else if (ope == '-'){
    std::cout << num1 - num2;
   }
   else if (ope == '*'){
    std::cout << num1 * num2;
   }
   else if (ope== '/'){
     if (num2 == 0 ){
       std::cout << "Cant be divided by 0";
     }
     else{
    std::cout << num1 / num2;
     }
   }
   else {
    std::cout << "Error";
   }




  return 0;
}
