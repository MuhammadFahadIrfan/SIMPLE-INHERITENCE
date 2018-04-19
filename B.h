#include <iostream>
#include "A.h"
#include <conio.h>
using namespace std;

class B:public A
{
  public:
  B()
  {
    this->y=0;
  }
  B(float Y)
  {
    this->y=Y;
  }
  B(B& clone)
  {
    this->y=clone.y;
  }
  float gety()
  {
    return this->y;
  }
  void sety(float Y)
  {
    this->y=Y;
  }
  void displayy()
  {
    cout<<"VALUE OF Y ::: "<<this->y<<endl;
  }



  private:
  float y;
};