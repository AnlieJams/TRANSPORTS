#include "Ship.h"

using namespace std;
Ship::Ship() : Vehicle() {}

Ship::Ship(int weight, float speed, float FuelConsumptionPerOneHundredKm) :
	
	Vehicle(weight, speed, FuelConsumptionPerOneHundredKm) {}

float Ship::FuelConsumption(float time) { return Vehicle::FuelConsumption(time); }

void Ship::Show() {
	cout << "Vehicle type: Ship" << endl;
	Vehicle::Show();
}