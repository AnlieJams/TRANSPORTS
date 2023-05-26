#include "Wheels.h"
using namespace std;

Wheels::Wheels() : diameter(0), firm("") {}

Wheels::Wheels(float diameter, string firm) : 
	
	diameter(diameter), firm(firm) {}

void Wheels::Show() { cout << "Diamemet: " << diameter 
	
<< "\"" << endl << "Firm: " << firm << endl; }