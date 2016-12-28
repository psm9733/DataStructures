#pragma once
#include <string>
#include <iostream>
#define NAME_LEN 30
#define PHONE_LEN 30
using namespace std;

class NameCard {
private:
	char name[NAME_LEN];
	char phone[PHONE_LEN];
public:
	NameCard(char *name, char *phone);
	NameCard(NameCard &copy);
	void ShowNameCardInfo();
	bool NameCompare(NameCard *pcard);
	void ChangePhoneNum(NameCard *pcard, char *phone);
	bool operator == (NameCard target);
	bool operator == (char *targetname);
};


NameCard::NameCard(char *name = "NameEmpty", char *phone = "PhoneEmpty") {
	strcpy_s(this->name, name);
	strcpy_s(this->phone, phone);
}

NameCard::NameCard(NameCard &copy) {
	strcpy_s(this->name, copy.name);
	strcpy_s(this->phone, copy.phone);
}

bool NameCard::operator == (NameCard target) {
	if (!strcmp(this->name, target.name) == true)
		return true;
	else
		return false;
}

bool NameCard::operator == (char *targetname) {
	if (!strcmp(this->name, targetname) == true)
		return true;
	else
		return false;
}

void NameCard::ShowNameCardInfo() {
	cout << "Name = " << this->name;
	cout << ", Phone = " << this->phone << endl;
}

bool NameCard::NameCompare(NameCard *pcard) {
	if (strcmp(this->name, pcard->name)) {
		return true;
	}
	return false;
}

void NameCard::ChangePhoneNum(NameCard *pcard, char *phone) {
	strcpy_s(pcard->phone, phone);
}