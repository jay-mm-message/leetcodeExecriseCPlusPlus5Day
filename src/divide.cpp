#include <iostream>
int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::showpoint);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9/5.0 = " << 9 / 5.0 << endl;
    cout << "double constants: 1e3f/9.0f = ";
    cout << 1.e3f / 9.0f << endl;
    cout << 1.e-3f << endl;
    cout << 1.e3f << endl;
    return 0;
}