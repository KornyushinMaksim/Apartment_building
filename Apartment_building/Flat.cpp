#include "Flat.h"

inline void Flat::copy_human(Human& new_human, Human& human)
{
	new_human.set_name(human.get_name());
	new_human.set_lastname(human.get_lastname());
	new_human.set_gender(human.get_gender());
	new_human.set_age(human.get_age());
}

void Flat::add_human(Human& human)
{
	if (tenants_of_the_flat != nullptr) {
		Human* temp = new Human[size + 1];
		for (int i = 0; i < size; i++) {
			copy_human(temp[i], tenants_of_the_flat[i]);
		}
		copy_human(temp[size], human);
		delete[] tenants_of_the_flat;
		tenants_of_the_flat = temp;
		size++;
	}
	else {
		this->size = 1;
		this->number = 0;
		tenants_of_the_flat = new Human[size];
		copy_human(*tenants_of_the_flat, human);
	}
}

string Flat::to_print_flat()
{
	string s = "";
	for (int i = 0; i < size; i++) {
		s.append(tenants_of_the_flat[i].to_print_human());
	}
	s.append("-------------------");
	s.append("\n");
	return s;
}
