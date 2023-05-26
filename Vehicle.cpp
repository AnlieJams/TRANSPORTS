#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() : weight(0), speed(0), FuelConsumptionPerOneHundredKm(0) {}

Vehicle::Vehicle(int weight, float speed, 
	
	float FuelConsumptionPerOneHundredKm) : weight(weight), speed(speed), FuelConsumptionPerOneHundredKm(FuelConsumptionPerOneHundredKm) {}

float Vehicle::FuelConsumption(float time) { return time * speed * FuelConsumptionPerOneHundredKm; }

void Vehicle::Show() { cout << "Weight: " << weight << endl << "Speed: " << speed << endl
	<< "Fuel consumption per 100 km: " << FuelConsumptionPerOneHundredKm << endl; }