#include <iostream>

using namespace std;

class Animal {
private:
  int aWeight;
  int aHeight;
  int aAge;
  int aId;
public:
  string colorOfSkin;
  string colorOfEye;

Animal() {//const with no param
  aWeight=0;
  aHeight=0;
  aAge=0;
  aId=-1;
}
Animal(int Weight, int Height, int Age, int Id) {//const with 4 param
  aWeight=Weight;
  aHeight=Height;
  aAge=Age;
  aId=Id;
}
void intro() {
  cout<<"Weight: " <<aWeight<< " Height: " <<aHeight<< " Age: " <<aAge<< " Id: " <<aId<<"\n";
  cout<<"Color of skin: " <<colorOfSkin<< "\n"" Color of Eyes: " <<colorOfEye<<"\n";
}
};

int main() {
  cout << "c++Lab9b Author Charles Yingling\n";
 Animal a1;//first const with no param     
  a1.colorOfSkin="Tan";
  a1.colorOfEye="Blue";
  a1.intro();
  Animal a2(5,3,1,34);//2nd const with 4 param
  a2.colorOfSkin="White";
  a2.colorOfEye="Brown";
  a2.intro();
}
