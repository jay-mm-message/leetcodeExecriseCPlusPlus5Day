// arrayone.cpp -- small array of integers
#include <iostream>
#include <cstring>
int main()
{
     using namespace std;
     int yams[3];
     yams[0] = 7;
     yams[1] = 8;
     yams[2] = 6;

     // test the remote history of git
     int yam_costs[3] = {20, 30, 5};
     cout << "The total size of the array yam_cost: " << sizeof(yam_costs) << " bytes.\n";
     cout << "The element size of the yam_costs[0]: " << sizeof(yam_costs[0]) << " bytes.\n";
     
     cout << "Total yams= ";
     cout << yams[0] + yams[1] + yams[2] << endl;
     cout << "The package with " << yams[1] << " yams costs "
          << yam_costs[1] << " cents per yam." << endl;

     int total = yams[0] * yam_costs[0] + yams[1] * yam_costs[1];
     total += yams[2] * yam_costs[2];

     cout << "The total yam expense is " << total << " cents.\n";
     cout << endl
          << "size of yams array = " << sizeof(yams)
          << " bytes.\n";
     cout << "size of one element = " << sizeof(yams[0])
          << " bytes.\n";

     int exercise[3] = {1};
     for(int elem = 0 ; elem < sizeof(exercise)/sizeof(exercise[0]); elem++)
     {
          cout << "exercise[" << elem << "] = " << exercise[elem] << endl;
     }
     int idx = 0;
     for(int e : exercise)
     {
          cout << "exercise[" << idx << "] = " << e << endl;
          ++idx;
     }

     int exercise2[3] {1, 2, 3};
     for(int elem = 0 ; elem < sizeof(exercise2)/sizeof(exercise2[0]); elem++)
     {
          cout << "exercise2[" << elem << "] = " << exercise2[elem] << endl;
     }


     char dogT[2] = {'a','\0'};
     cout << "Test null character: " << dogT << endl;
     char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};
     cout << "The string of dog is: " << dog << endl;
     //char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};
     char cat[8] = {'f', '\0', 't', 'e', '\0', 's', 'a', '\0'};
     cout << "The string of cat is: " << cat << ", length: " << strlen(cat) << endl;
     return 0;
}
