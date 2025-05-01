#include <iostream>
int main() {
    float hats, heads;
    
    using namespace std;
    cout.setf(ios::fixed, ios::floatfield);
    cout << "\nEnter a number of hats: \n";
    hats = 50.25;
    cout << "\nEnter a number of heads: \n";
    heads = 11.17;

    cout << "hats = " << hats << endl;
    cout << "heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    cout << "hats % heads = " << static_cast<int>(hats) % static_cast<int>(heads) << endl;

    cout << "19 % 2 = " << 19 % 2 << endl;
    cout << "19 / 2 = " << 19 / 2 << endl;
    return 0;
}