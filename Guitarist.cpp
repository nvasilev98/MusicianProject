#include "Guitarist.h"
#include <iostream>
using namespace std;
Guitarist::Guitarist(const char* name, const char* code, int groups, int technique) : Musician(name, code, groups) {
	this->setTechnique(technique);
}
void Guitarist::setTechnique(int technique) {
	if (technique >= 0) {
		this->technique = technique;
	}
}
int Guitarist::getTechnique()const {
	return this->technique;
}
int Guitarist::getFame() {
	if (this->getGroups() > 0) {
		return 2 * this->getGroups() + 5 * this->technique;
	}
	else
		return 1 + 4 * this->technique;
}