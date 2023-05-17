#pragma once
#include "Flat.h"
class House
{
private:
	int number; //???
	int size;
	Flat* flats;
public:
	House(Flat*& flats, int number, int size)
	{
		this->number = number;
		this->size = size;
		for (int i = 0; i < size; i++) {
			this->flats[i] = flats[i];
		}
	}
	House(Flat& flat, int number)
	{
		Flat* new_flats = new Flat[size + 1];
		for (int i = 0; i < number; i++) {
			new_flats[i] = flats[i];
		}
		new_flats[number] = flat;
		for (int i = number; i < size; i++) {
			new_flats[i + 1] = flats[i];
		}
		delete[] flats;
		flats = new_flats;
		size++;
	}
	House() : flats{ nullptr }, number{ 0 }, size{ 0 } {}
	~House()
	{
		if (flats) {
			delete[] flats;
		}
	}

	void add_flat(Flat flat);
	string to_print_house();
};

