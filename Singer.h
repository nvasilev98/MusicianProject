#ifndef SINGER_H
#define SINGER_H
#include "Musician.h"
class Singer: virtual public Musician {
public:
	Singer(const char* name = "", const char* Code = "", int groups = 0, int vocalRange = 0);

	virtual Type getType()const { return SINGER; };

	void setVRange(int);
	int getVRange()const;

	virtual int getFame();
private:
	int vocalRange;

};
#endif // !SINGER_H

