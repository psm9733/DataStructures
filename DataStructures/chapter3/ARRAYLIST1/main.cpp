#include <iostream>
#include "Arraylist.h"
#define space " "
using namespace std;

int main() {
	List<int> list;
	int data;

	list.LInsert(11);
	list.LInsert(11);
	list.LInsert(22);
	list.LInsert(22);
	list.LInsert(33);
	
	cout << "현재 데이터의 수: " << list.LCount() << endl;
	if (list.LHead(&data)) {
		cout << data << space;
	}
	while (list.LNext(&data))
		cout << data << space;
	cout << endl << endl;

	list.LRemove(11);


	cout << "현재 데이터의 수 = " << list.LCount() << endl;
	if (list.LHead(&data)) {
		cout << data << space;
	}
	while (list.LNext(&data)) {
		cout << data << space;
	}
	cout << endl << endl;
	
	return 0;
}