#include "Door.h"

using namespace std;

Door::Door() : height(0), length(0) {}

Door::Door(int height, int length) : height(height), length(length) {}

void Door::Show() { cout << "Height: " << height << "\"" << endl << "Length: " << length << "\"" << endl; }