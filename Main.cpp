#include<iostream>
using namespace std;
#include "Musician.h"
#include "Singer.h"
#include "Guitarist.h"
#include "SingingGuitarist.h"
double averageFame(Musician** list, int capacity);
bool check(Musician** list,int capacity);

int main() {
	SingingGuitarist ivan("ivan", "BG",2,3,5,"vankata",10);
	cout<<"name: "  << ivan.getName() << endl;
	cout <<"code: "<< ivan.getCode() << endl;
	cout <<"groups: "<< ivan.getGroups() << endl;
	cout << "vRange: " << ivan.getVRange() << endl;
	cout << "technique: "<<ivan.getTechnique() << endl;
	cout <<"fame: "<< ivan.getFame() << endl;
	cout << "songs: " << ivan.getSongs() << endl;
	
	system("pause");
	return 0;
}
double averageFame(Musician** list, int capacity) {
	double count = 0;
	double total = 0;
	for (int i = 0; i < capacity; i++) {
		total = total + list[i]->getFame();
		count++;
	}
	return total / count;

}
bool check(Musician** list, int capacity) {
	int CurrentFame = 0;
	bool flag = false;
	for (int i = 0; i <capacity; i++) {
		if (list[i]->getType() == 2) {
			if (list[i]->getFame() > CurrentFame) {
				CurrentFame = list[i]->getFame();
			}
		}
	}
	if (CurrentFame > averageFame(list, capacity)) {
		flag = true;
	}
	return flag;
}