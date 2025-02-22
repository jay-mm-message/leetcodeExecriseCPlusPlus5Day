// use_new.cpp -- using the new operator
#include <iostream>
int main()
{
  using namespace std;
  int nights = 1001;
  int *pt = new int;
  *pt = 1001;

  cout << "nights values = "
       << nights << ": locations " << &nights << endl;
  cout << "int ";
  cout << "value = " << *pt << ":location = " << pt << endl;

  double *pd = new double;
  *pd = 10000001.0;

  cout << endl;
  cout << "double ";
  cout << "value = " << *pd << ":location = " << pd << endl;
  cout << "locations of pointer pd: " << &pd << endl;
  cout << "size of pt= " << sizeof pt << endl;
  cout << "size of *pt= " << sizeof(*pt) << endl;
  cout << "size of pd= " << sizeof(pd) << endl;
  cout << "size of *pd= " << sizeof(*pd) << endl;

  if (pt != nullptr) {
    cout << "freeing memory of pt" << endl;
    delete pt;
    pt = nullptr;
  }
  if (pd != nullptr) {
    cout << "freeing memory of pd" << endl;
    delete pd;
    pd = nullptr;
  }

  const int psomeSz = 10;
  int *psome = new int [psomeSz];

  if (psome != nullptr) {
    cout << "freeing memory of psome" << endl;
    delete [] psome;
    psome = nullptr;
  } else {
    cout << "psome is nullptr" << endl;
  }
  return 0;
}
