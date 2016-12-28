#include <iostream>
#include "Arraylist.h"
#include "NameCard.h"

using namespace std;

int main() {
	List<NameCard> list;
	NameCard data;
	list.LInsert(NameCard("�ڻ��", "010-2707-9417"));
	list.LInsert(NameCard("�ڻ��", "010-2707-9417"));
	list.LInsert(NameCard("�ڻ���", "010-7355-9417"));
	list.LInsert(NameCard("�ڽ¼�", "010-3745-9417"));
	list.LInsert(NameCard("���ݼ�", "010-3387-9417"));
	list.LInsert(NameCard("��", "031-311-9417"));
	
	cout << "���� �������� ��: " << list.LCount() << endl;
	if (list.LHead(&data)) {
		data.ShowNameCardInfo();
	}
	while (list.LNext(&data)) {
		data.ShowNameCardInfo();
	}
	cout << endl << endl;

	list.LRemove(NameCard("�ڻ��", "010-2707-9417"));
	list.LRemove(NameCard("��", "031-311-9417"));
	list.LRemove(NameCard("�ڽ¼�"));

	cout << "���� �������� ��: " << list.LCount() << endl;
	if (list.LHead(&data)) {
		data.ShowNameCardInfo();
	}
	while (list.LNext(&data)) {
		data.ShowNameCardInfo();
	}
	cout << endl << endl;
	
	return 0;
}