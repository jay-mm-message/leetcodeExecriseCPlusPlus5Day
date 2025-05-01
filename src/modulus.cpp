#include <iostream>
int main() {
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    lbs = 177;

    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds is "
         << stone << " stone and " 
         << pounds << " pounds.\n";

    cout << "Press Enter to continue...";
    return 0;
}