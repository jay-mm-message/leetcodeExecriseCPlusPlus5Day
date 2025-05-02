#include <iostream>
int main() {
	
	enum weekday {sun, mon, tue, wed, thu, fri, sat};
	const char* weekdayNames[] = {"Sunday", 
		"Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"};
	
	for (int i = sun; i <= sat; ++i) {
		std::cout << "Today = " << weekdayNames[i] << std::endl;
	}
	return 0;
}