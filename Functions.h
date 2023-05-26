#pragma once
#pragma once
#include "all_includes.h"

using namespace std;

int menu() {
	system("cls");
	int choice;
	cout
		<< "---------------------" << endl
		<< "What you want to do?" << endl
		<< "1. Add a new vehicle" << endl
		<< "2. Delete a vehicle" << endl
		<< "3. Show all vehicles" << endl
		<< "4. Exit" << endl
		<< "---------------------" << endl
		<< ">>> ";
	cin >> choice;
	if (choice < 1 || choice > 4) {
		system("cls");
		menu();
	}
	return choice;
}

void add(vector<Vehicle*>& v) {
ADD:
	system("cls");
	int choice;

	cout
		<< "---------------------" << endl
		<< "What type of vehicle you want to add?" << endl
		<< "1. Plane" << endl
		<< "2. Ship" << endl
		<< "3. Truck" << endl
		<< "4. Bike" << endl
		<< "5. Automobile" << endl
		<< "6. Return" << endl
		<< "---------------------" << endl
		<< ">>> ";

	cin >> choice;

	if (choice < 1 || choice > 6) goto ADD;

	else if (choice == 1) {
		int weight;
		float speed;
		float FuelConsumptionPerOneHundredKm;

		system("cls");
		cout << "---------------------" << endl << "Enter data of the plane" << endl << "---------------------" << endl;
		cout << "Weight >>> ";
		cin >> weight;
		cout << "Speed >>> ";
		cin >> speed;
		cout << "Fuel consumption per 100 km >>> ";
		cin >> FuelConsumptionPerOneHundredKm;

		v.push_back(new Plane(weight, speed, FuelConsumptionPerOneHundredKm));
	}

	else if (choice == 2) {
		int weight;
		float speed;
		float FuelConsumptionPerOneHundredKm;

		system("cls");
		cout << "---------------------" << endl << "Enter data of the ship" << endl << "---------------------" << endl;
		cout << "Weight >>> ";
		cin >> weight;
		cout << "Speed >>> ";
		cin >> speed;
		cout << "Fuel consumption per 100 km >>> ";
		cin >> FuelConsumptionPerOneHundredKm;

		v.push_back(new Ship(weight, speed, FuelConsumptionPerOneHundredKm));
	}

	else if (choice == 3) {
		int weight;
		float speed;
		float FuelConsumptionPerOneHundredKm;

		system("cls");
		cout << "---------------------" << endl << "Enter data of the truck" << endl << "---------------------" << endl;
		cout << "Weight >>> ";
		cin >> weight;
		cout << "Speed >>> ";
		cin >> speed;
		cout << "Fuel consumption per 100 km >>> ";
		cin >> FuelConsumptionPerOneHundredKm;

		v.push_back(new Truck(weight, speed, FuelConsumptionPerOneHundredKm));
	}

	else if (choice == 4) {
		int weight;
		float speed;
		float FuelConsumptionPerOneHundredKm;

		system("cls");
		cout << "---------------------" << endl << "Enter data of the bike" << endl << "---------------------" << endl;
		cout << "Weight >>> ";
		cin >> weight;
		cout << "Speed >>> ";
		cin >> speed;
		cout << "Fuel consumption per 100 km >>> ";
		cin >> FuelConsumptionPerOneHundredKm;

		v.push_back(new Bike(weight, speed, FuelConsumptionPerOneHundredKm));
	}

	else if (choice == 5) {
		int weight;
		float speed;
		float FuelConsumptionPerOneHundredKm;
		system("cls");
		cout << "---------------------" << endl << "Enter data of the automobile" << endl << "---------------------" << endl;
		cout << "Weight >>> ";
		cin >> weight;
		cout << "Speed >>> ";
		cin >> speed;
		cout << "Fuel consumption per 100 km >>> ";
		cin >> FuelConsumptionPerOneHundredKm;

		v.push_back(new Automobile(weight, speed, FuelConsumptionPerOneHundredKm));
	}

	else return;
}

void del(vector<Vehicle*>& v) {
DEL:
	system("cls");
	int choice;
	cout
		<< "----------------------------------------------------------" << endl
		<< "Which element do you want to delete? (Enter a number only)" << endl
		<< "----------------------------------------------------------" << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << i + 1 << ". ";
		v[i]->Show();
		cout << "----------------------------------------------------------" << endl;
	}
	cout << "To return enter 0 >>> ";

	cin >> choice;
	if (choice == 0) return;
	else if (choice < 0 || choice > v.size()) goto DEL;
	else {
		v.erase(v.begin() + choice - 1);
		return;
	}
}

void show(vector<Vehicle*> v) {
	system("cls");
	char symbol;

	cout << "---------------------" << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << i + 1 << ". ";
		v[i]->Show();
		cout << "---------------------" << endl;
	}
	cout << "To return enter R >>> ";

SYMBOL:
	cin >> symbol;
	if (symbol == 'R') return;
	else goto SYMBOL;
}