#pragma once
#include "Flat.h"
class House
{
private:
	int number; //???
	int size;
	Flat* flats;
public:
	House(int number, int size, Flat* flats)
	{
		this->number = number;
		this->size = size;
		if (flats) {
			flats = new Flat[size];
			for (int i = 0; i < size; i++) {
				this->flats[i] = flats[i];
			}
		}
	}
	House(House& other)
	{
		number = other.number;
		size = other.size;
		flats = new Flat[other.size];
		for (int i = 0; i < other.size; i++) {
			flats[i] = other.flats[i];
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
	House() : House(0, 0, nullptr) {}
	~House()
	{
		if (flats) {
			delete[] flats;
		}
	}

	void add_flat(Flat& flat);
	string to_print_house();
};

