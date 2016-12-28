#include <iostream>
#include "Arraylist.h"
#include "NameCard.h"

using namespace std;

int main() {
	List<NameCard> list;
	NameCard data;
	list.LInsert(NameCard("박상민", "010-2707-9417"));
	list.LInsert(NameCard("박상민", "010-2707-9417"));
	list.LInsert(NameCard("박상헌", "010-7355-9417"));
	list.LInsert(NameCard("박승순", "010-3745-9417"));
	list.LInsert(NameCard("지금선", "010-3387-9417"));
	list.LInsert(NameCard("집", "031-311-9417"));
	
	cout << "현재 데이터의 수: " << list.LCount() << endl;
	if (list.LHead(&data)) {
		data.ShowNameCardInfo();
	}
	while (list.LNext(&data)) {
		data.ShowNameCardInfo();
	}
	cout << endl << endl;

	list.LRemove(NameCard("박상민", "010-2707-9417"));
	list.LRemove(NameCard("집", "031-311-9417"));
	list.LRemove(NameCard("박승순"));

	cout << "현재 데이터의 수: " << list.LCount() << endl;
	if (list.LHead(&data)) {
		data.ShowNameCardInfo();
	}
	while (list.LNext(&data)) {
		data.ShowNameCardInfo();
	}
	cout << endl << endl;
	
	return 0;
}