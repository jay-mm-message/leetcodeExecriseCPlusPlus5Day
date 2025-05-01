#include <iostream>
struct inflatable
{
	/* data */
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest[2] =
	{
		{"\"Bambi\"", 0.5, 21.99},
		{"\"Godzilla\"", 2000, 565.99}
	};
	cout << "The inflatable structure " << guest[0].name;
	cout << " has a volume of " << guest[0].volume;
	cout << " has a price of $" << guest[0].price;
	cout << " cubic feet.\n";
	cout << "The inflatable structure " << guest[1].name;
	cout << " has a volume of " << guest[1].volume;
	cout << " has a price of $" << guest[1].price;
	cout << " cubic feet.\n";
	return 0;
}