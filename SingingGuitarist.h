#ifndef SINGINGGUITARIST_H
#define SINGINGGUITARIST_H
#include "Guitarist.h"
#include "Singer.h"
class SingingGuitarist:public Singer, public Guitarist {
public:
	SingingGuitarist(const char* name = "", const char* code = "", int groups = 0, int vocalRange = 0, int technique = 0, const char* nickname = "", int songs = 0);
	SingingGuitarist(const SingingGuitarist&);
	SingingGuitarist& operator=(const SingingGuitarist&);
	virtual ~SingingGuitarist();

	void setNickname(const char*);
	void setSongs(int);
	virtual Type getType()const { return SINGINGGUITARIST; };
	const char* getNickname()const;
	int getSongs()const;

	virtual int getFame();

private:
	char* nickname;
	int songs;


};


#endif