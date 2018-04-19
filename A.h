#include <iostream>
#include <conio.h>
using namespace std;
class A
{
  public:
  A()
  {
    this->x=0;
  }
  A(float X)
  {
    this->x=X;
  }
  A(A& clone)
  {
    this->x=clone.x;
  }
  float getx()
  {
    return this->x;
  }
  void setx(float X)
  {
    this->x=X;
  }
  void displayx()
  {
    cout<<"VALUE OF X ::: "<<this->x<<endl;
  }



  private:
  float x;
};