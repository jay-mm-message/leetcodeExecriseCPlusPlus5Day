#include <iostream>
int main() {

    using namespace std;
    char ch = 'A';  // assign ASCII
    int i = ch; //Store same code in int

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1; // add 1 to the char
    i = ch; // store the new code in int
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch); // display the char

    cout.put('!'); // display a newline

    cout << endl << "Done" << endl;
    return 0;
}