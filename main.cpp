#include "all_includes.h"
#include "functions.h"

int main() {
	Car c(4, 4, 20, "Mercedes", 240, 6000, 20, 50, 40);
	c.Show();
	Sleep(5000);

	int choice;
	std::vector<Vehicle*> vehicle(0);
	do {
		choice = menu();
		if (choice == 1) add(vehicle);
		if (choice == 2) del(vehicle);
		if (choice == 3) show(vehicle);
	} while (choice != 4);
}