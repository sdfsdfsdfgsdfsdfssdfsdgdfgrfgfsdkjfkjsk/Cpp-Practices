#include <iostream>

using namespace std;

int main(){

  string phrase = "Girafee" ;
  std::cout << phrase << "\n";
  std::cout << phrase.find("e") << "\n"; //finds which number does "e" lies in
  std::cout << phrase.substr(2, 3); /* goes after 2 chracter and grab 
                                       3 character from it */ 
                                    
  
  return 0;
}
