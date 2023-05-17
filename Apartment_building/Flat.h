#pragma once
#include <string>
#include "Human.h";
using namespace std;

class Flat
{
private:
	Human* tenants_of_the_flat;
	int size;
	int number;
public:
	Flat()
	{
		tenants_of_the_flat = nullptr;
		size = 0;
		number = 0;
	}
	Flat(Human& human)
	{
		//if (human) {
			size++;
			add_human(human);
			//Human* temp = new Human[this->size];
			//for (int i = 0; i < this->size; i++) {
			//	copy_human(temp[i], human[i]);
			//}
		//}
	}
	Flat(const Flat& other)
	{
		for (int i = 0; i < other.size; i++) {
			this->tenants_of_the_flat[i] = other.tenants_of_the_flat[i];
		}
		this->size = other.size;
		this->number = other.number;
	}
	~Flat()
	{
		if (tenants_of_the_flat) {
			delete[] tenants_of_the_flat;
		}
	}

	void copy_human(Human& new_human, Human& this_human);
	void add_human(Human& human);
	string to_print_flat();
};

