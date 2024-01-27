#include <iostream>
using namespace std;
template <class T>
class Arithmatic
{
  private:
    T a;
    T b;
  public:
    Arithmatic(T a,T b);
    T add();
    T sub();
};
template <class T>
Arithmatic<T>::Arithmatic(T a,T b)
    {
      this->a=a;
      this->b=b;
    }
template <class T>
    T Arithmatic<T>::add()
    {
      return a+b;
    }
template <class T>
  T Arithmatic<T>::sub()
    {
      return a-b;
    }


int main()
{
  Arithmatic<float> a1(3.555,3.555);
  cout<<"Add: "<<a1.add()<<endl;
  cout<<"Subtract: "<<a1.sub()<<endl;
  return 0;
}
