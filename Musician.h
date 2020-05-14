#ifndef MUSICIAN_H
#define MUSICIAN_H
class Musician {
public:
	enum Type {
		MUSICIAN, GUITARIST, SINGER, SINGINGGUITARIST
	};
	Musician(const char* name = "", const char* Code = "", int groups = 0);
	Musician(const Musician&);
	Musician& operator=(const Musician&);
	virtual ~Musician();

	void setName(const char*);
	void setCode(const char*);
	void setGroups(int);
	virtual Type getType()const { return MUSICIAN; };
	const char* getName()const;
	const char* getCode()const;
	int getGroups()const;
	virtual int getFame();

private:
	char* name;
	char* code;
	int groups;

};
#endif // !MUSICIAN_H

