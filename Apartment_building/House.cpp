#include "House.h"

void House::add_flat(Flat flat)
{
	Flat* temp = new Flat[size + 1];
	for (int i = 0; i < size; i++) {
		temp[i] = flats[i];
		}
		temp[size] = flat;
		delete[] flats;
		flats = temp;
		size++;
}

string House::to_print_house()
{
	string s{ "" };
	for (int i = 0; i < size; i++) {
		s.append(flats[i].to_print_flat());
	}
	s.append("*******************");
	s.append("\n");
	return s;
}
