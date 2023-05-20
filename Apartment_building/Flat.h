#pragma once
#include <string>
#include "Human.h";
using namespace std;

class Flat
{
private:
	int size;
	int number;
	Human* tenants_of_the_flat;
public:
	Flat(int size, int number, Human* humans)
	{
		this->size = size;
		this->number = number;
		if (humans) {
			tenants_of_the_flat = new Human[size];
			for (int i = 0; i < size; i++) {
				copy_human(this->tenants_of_the_flat[i], tenants_of_the_flat[i]);
			}
		}
	}
	Flat() : Flat(0, 0, nullptr) {}
	Flat(const Flat& other)
	{
		this->size = other.size;
		this->number = other.number;
		if (other.tenants_of_the_flat)
		{
			tenants_of_the_flat = new Human[other.size];
			for (int i = 0; i < other.size; i++) {
				copy_human(tenants_of_the_flat[i], other.tenants_of_the_flat[i]);
				//tenants_of_the_flat[i] = other.tenants_of_the_flat[i];
			}
		}
	}
	Flat& operator= (const Flat& flat) {
		if (this != &flat) {
			this->size = flat.size;
			this->number = flat.number;
			tenants_of_the_flat = new Human[flat.size];
			for (int i = 0; i < flat.size; i++) {
				copy_human(tenants_of_the_flat[i], flat.tenants_of_the_flat[i]);
			}
		}
		return *this;
	}

	void copy_human(Human& new_human, Human& this_human);
	void add_human(Human& human);
	void del_human(int index);
	//void del_human(const char*);
	string to_print_flat();

	~Flat()
	{
		if (tenants_of_the_flat) {
			delete[] tenants_of_the_flat;
		}
	}
};

