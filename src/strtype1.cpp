// strtype1.cpp -- using the c++ string class
#include <string>
#include <iostream>
int main()
{
  using namespace std;

  const int sz = 20;
  //char charr1[20];
  char charr2[sz] = "jaguar";
  //string str1;
  string str2 = "panther";

  cout << "Enter a kind of feline: ";
  // (cin >> charr1).get(); //ocelot 
  char charr1[sz] {"ocelot"};
  cout << "Enter another kind of feline: ";
  // (cin >> str1).get();  //tiger
  string str1 {"tiger"};

  cout << "Here are some felines:\n";
  cout << charr1 << " " << charr2 << " "
       << str1 << " " << str2 << endl;
  cout << "The third letter in " << charr2 << " is "
       << charr2[2] << endl;
  cout << "The third letter in " << str2 << " is "
       << str2.at(2) << endl;

  string str3 {"lion"};
  string str4;
  str4 = str3;
  cout << "str3: " << str3 << endl;
  cout << "str4: " << str4 << endl;
  str4 = "bird";
  cout << "str3: " << str3 << endl;
  cout << "str4: " << str4 << endl;
  return 0;
}
