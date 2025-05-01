// structure.cpp -- a simple structure
#include <iostream>
#include <string>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

struct bedge
{
    int numberId;
    std::string name;
};

struct classStudent
{
    std::string name;
    int age;
    char grade;
};

int main()
{
    using namespace std;
    cout << "\n\n\n"
        << endl;
	classStudent students[5] = {
		{"Sandy", 20, 'A'},
		{"Lily", 22, 'B'},
		{"Susan", 21, 'C'},
		{"Anne", 23, 'A'},
		{"Ros", 24, 'B'}};

	for (classStudent student : students) {
		cout << "Student name: " << student.name
			<< ", age: " << student.age
			<< ", grade: " << student.grade << endl;
	}
	
    cout << "\n\n\n"
        << endl;
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99};
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99};
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    bedge b1 = {
        1,
        "Ellie"};
    bedge b2 = {
        2,
        "Susan"};
    bedge b3 = {
        3,
        "Sandy"};

    cout << "Company employee: " << b1.name
         << ", with number ID: " << b1.numberId << endl;
    cout << "Company employee: " << b2.name
         << ", with number ID: " << b2.numberId << endl;
    cout << "Company employee: " << b3.name
         << ", with number ID: " << b3.numberId << endl;

    cout << endl;
    bedge employs[]{{1, "Ellie"}, {}, {2, "Susan"}, {3, "Sandy"}, {4, "Linda"}, {}};
    for (bedge employ : employs)
    {
        cout << "Company employee: " << employ.name
             << ", with number ID: " << employ.numberId << endl;
    }

    bedge b4{b3};
    cout << "Company employee: " << b3.name
         << ", with number ID: " << b3.numberId << endl;
    cout << "Company employee: " << b4.name
         << ", with number ID: " << b4.numberId << endl;
    b4.name = "12345";
    cout << "Company employee: " << b3.name
         << ", with number ID: " << b3.numberId << endl;
    cout << "Company employee: " << b4.name
         << ", with number ID: " << b4.numberId << endl;
    return 0;
}
