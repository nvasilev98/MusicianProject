#ifndef GUITARIST_H
#define GUITARIST_H
#include "Musician.h"
class Guitarist :virtual public Musician {
public:
	Guitarist(const char* name = "", const char* Code = "", int groups = 0, int technique = 0);

	virtual Type getType()const { return GUITARIST; };


	void setTechnique(int);

	int getTechnique()const;

	virtual int getFame();

private:
	int technique;
};
#endif // !GUITARIST_H

