#include "SingingGuitarist.h"
#include <iostream>
SingingGuitarist::SingingGuitarist(const char* name, const char* code, int groups, int vocalRange, int technique, const char* nickname, int songs):
	Musician(name,code,groups),
	Singer(name,code,groups,vocalRange),
	Guitarist(name,code,groups,technique),
	nickname(NULL)
{
	this->setNickname(nickname);
	this->setSongs(songs);
}
SingingGuitarist::SingingGuitarist(const SingingGuitarist& other):Singer(other), Guitarist(other), nickname(NULL) {

	this->setNickname(other.nickname);
	this->setSongs(other.songs);
	
}
SingingGuitarist& SingingGuitarist::operator=(const SingingGuitarist& other) {
	if (this != &other) {
		Singer::operator=(other);
		Guitarist::operator=(other);
		this->setNickname(other.nickname);
		this->setSongs(other.songs);
	}
	return *this;
}
SingingGuitarist::~SingingGuitarist() {
	delete[]nickname;
}
void SingingGuitarist::setNickname(const char* nickname) {
	if (this->nickname != NULL)
		delete[]this->nickname;
	int len = strlen(nickname) + 1;
	this->nickname = new char[len];
	strcpy_s(this->nickname, len, nickname);
}
void SingingGuitarist::setSongs(int songs) {
	if (songs >= 0) {
		this->songs = songs;
	}
}
const char* SingingGuitarist::getNickname()const {
	return this->nickname;
}
int SingingGuitarist::getSongs()const {
	return this->songs;
}
int SingingGuitarist::getFame() {
	return 20 * this->songs + this->getTechnique();
}