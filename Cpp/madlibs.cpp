#include <iostream>

using namespace std;

int main(){
  string color, celebrity, pluralNoun;

  std::cout << "Enter a color: ";
  getline(cin, color);
  
  std::cout << "Enter a plural noun: ";
  getline(cin, pluralNoun); 
  
  std::cout << "Enter a celebrity name: " << "\b";
  getline(cin, celebrity);
  
  std::cout << "__________________________" << "\n";

  std::cout << "Roses are " << color <<"\n";
  std::cout << pluralNoun << " is blue" << "\n";
  std::cout << "I love " << celebrity << "\n";

  return 0;
}
