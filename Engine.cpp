#include "Engine.h"

using namespace std;

Engine::Engine() : power(0), torque(0), specificFuelConsumption(0) {}

Engine::Engine(int power, int torque, int specificFuelConsumption) : power(power), 
torque(torque), specificFuelConsumption(specificFuelConsumption) {}

void Engine::Show() { cout << "Power: " << power << " kW" << endl << "Torque: " << torque << " N*m" << endl 
<< "Specific Fuel Consumption: " << specificFuelConsumption << " kW*h" << endl; }