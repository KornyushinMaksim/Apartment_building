#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	char* name;
	char* lastname;
	char* gender;
	int age;
public:
	Human(const char* name, const char* lastname, const char* gender, int age)
	{
		if (name) {
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		if (lastname) {
			this->lastname = new char[strlen(lastname) + 1];
			strcpy_s(this->lastname, strlen(lastname) + 1, lastname);
		}
		if (gender) {
			this->gender = new char[strlen(gender) + 1];
			strcpy_s(this->gender, strlen(gender) + 1, gender);
		}
		this->age = age;
	}
	Human(const Human& other)
	{
		if (other.name) {
			name = new char[strlen(other.name) + 1];
			strcpy_s(name, strlen(other.name) + 1, other.name);
		}
		if (other.lastname) {
			lastname = new char[strlen(other.lastname) + 1];
			strcpy_s(lastname, strlen(other.lastname) + 1, other.lastname);
		}
		if (other.gender) {
			gender = new char[strlen(other.gender) + 1];
			strcpy_s(gender, strlen(other.gender) + 1, other.gender);
		}
		age = other.age;
	}
	Human() : Human(nullptr, nullptr, nullptr, 0) {}

	char* get_name() {
		return this->name;
	}
	char* get_lastname() {
		return this->lastname;
	}
	char* get_gender() {
		return this->gender;
	}
	int get_age() {
		return this->age;
	}

	void set_name(const char* name) {
		if (!this->name) {
			delete[] this->name;//??????????????????????????????????????????
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		else {
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
	}
	void set_lastname(const char* lastname) {
		if (!this->lastname) {
			delete[] this->lastname;//??????????????????????????????????????????
			this->lastname = new char[strlen(lastname) + 1];
			strcpy_s(this->lastname, strlen(lastname) + 1, lastname);
		}
		else {
			this->lastname = new char[strlen(lastname) + 1];
			strcpy_s(this->lastname, strlen(lastname) + 1, lastname);
		}
	}
	void set_gender(const char* gender) {
		if (!this->gender) {
			delete[] this->gender;//??????????????????????????????????????????
			this->gender = new char[strlen(gender) + 1];
			strcpy_s(this->gender, strlen(gender) + 1, gender);
		}
		else {
			this->gender = new char[strlen(gender) + 1];
			strcpy_s(this->gender, strlen(gender) + 1, gender);
		}
	}
	void set_age(int age) {
		this->age = age;
	}

	string to_print_human();

	~Human()
	{
		if (this->name) {
			delete[] name;
		}
		if (this->lastname) {
			delete[] lastname;
		}
		if (this->gender) {
			delete[] gender;
		}
	}
};

