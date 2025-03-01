// addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
  using namespace std;
  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};

  double *pw = wages;
  short *ps = &stacks[0];

  cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
  pw += 1;

  cout << "add 1 to the pw pointer:\n";
  cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

  cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
  ps += 1;
  cout << "add 1 to the ps pointer:\n";
  cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

  cout << "access two elements with array notation\n";
  cout << "stacks[0]= " << stacks[0];
  cout << ", stacks[1]= " << stacks[1] << endl;
  cout << "access two elements with pointer notation\n";
  cout << "*stacks= " << *stacks;
  cout << ", *(stacks+1)= " << *(stacks + 1) << endl;

  cout << "sizeof(wages) = " << sizeof(wages) << endl;
  cout << "sizeof(pw) = " << sizeof(pw) << endl;

  short tell[10];
  cout << tell << endl;
  cout << &tell << endl;
  cout << &tell[0] << endl;

  for(int it = 0 ; it < 10 ; it++)
  {
    tell[it] = it + 1;
    cout << tell[it] << ' ';
  }
  cout << endl;

  short (*pt)[10] = &tell;
  for(int ipt = 0 ; ipt < 10 ; ipt++)
  { 
    (*pt)[ipt] = (*pt)[ipt] + 1;
  }

  for(int it = 0 ; it < 10 ; it++)
  {
    cout << tell[it] << ' ';
  }
  cout << endl;
  cout << &tell[2] << endl;
  cout << (*pt)[2] << endl;
  cout << &(*pt)[2] << endl;
  return 0;
}
