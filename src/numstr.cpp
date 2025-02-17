// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
  using namespace std;

  cout << "What year was your house built?\n";
  int year;
  (cin >> year).get(); // read number and newline
  cout << "What is its street address?\n";
  // 1600 Amphitheatre Parkway Mountain View, CA 94043
  char address[80];
  cin.getline(address, 80);
  cout << "Year built: " << year << endl;
  cout << "Address: " << address << endl;
  cout << "Done!\n";

  return 0;
}
