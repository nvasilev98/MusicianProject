#include "Musician.h"
#include <iostream>
using namespace std;
Musician::Musician(const char* name, const char* Code, int groups):name(NULL),code(NULL) {
	this->setName(name);
	this->setCode(Code);
	this->setGroups(groups);
}
Musician::Musician(const Musician& other):name(NULL),code(NULL){
	this->setName(other.name);
	this->setCode(other.code);
	this->setGroups(other.groups);
}
Musician& Musician::operator=(const Musician& other) {
	if (this != &other) {


		this->setName(other.name);
		this->setCode(other.code);
		this->setGroups(other.groups);


	}
	return *this;
}
Musician::~Musician() {
	delete[] name;
	delete[] code;
}
void Musician::setName(const char* name) {
	if (this->name != NULL)
		delete[] this->name;
	int len = strlen(name) + 1;
	this->name = new char[len];
	strcpy_s(this->name, len, name);
}
void Musician::setCode(const char* code) {
	if (strlen(code) < 4) {
		if (this->code != NULL)
			delete[]this->code;
		int len = strlen(code) + 1;
		this->code = new char[len];
		strcpy_s(this->code, len, code);
	}
}
void Musician::setGroups(int groups) {
	if (groups >= 0) 
		this->groups = groups;
}
const char* Musician::getName()const {
	return this->name;
}
const char* Musician::getCode()const {
	return this->code;
}
int Musician::getGroups()const {
	return this->groups;
}
int Musician::getFame() {
	return 10 + 2 * this->groups;
}
