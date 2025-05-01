#include <iostream>
using namespace std;

union ui {
	int i;
	float f;
};

void doDisplay(ui u) {
	cout << "Integer: " << u.i << endl;
	cout << "Float: " << u.f << endl;
}

int main() {
	ui u;

	u.i = 42;
	doDisplay(u); // This will display the integer value

	u.f = 3.14f;
	doDisplay(u); 

	u.i = 100;
	doDisplay(u); 
	
	return 0;
}