// strtype4.cpp -- line ipnut
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    const int sz = 20;
    char charr[sz] {};
    string str {};

    cout << "Length of string in str before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    //cin.getline(charr, sz);
    strncpy(charr, "peanut butter", sz);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    //getline(cin, str);
    str = "blueberry jam";

    cout << "You entered " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}
