#include "Singer.h"
#include <iostream>
Singer::Singer(const char* name, const char* code, int groups, int vocalRange): Musician(name,code,groups){
	this->setVRange(vocalRange);
}
void Singer::setVRange(int vRange) {
	if (vRange >= 0)
		this->vocalRange = vRange;
}
int Singer::getVRange()const {
	return this->vocalRange;
}
int Singer::getFame() {
	return 5 + this->getGroups() + 3 * this->vocalRange;
}