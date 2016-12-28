#pragma once
#define length 100

template <class T>
class List {
private:
	T list[length];
	int NumberOfData;
	int idx_pos;
public:
	List();
	void LInsert(T data);
	bool LHead(T *pdata);
	bool LNext(T *pdata);
	bool LSearch(T target, int *pos);
	bool LRemove(T target);
	int LCount();
};

template <class T>
List<T>::List() {
	NumberOfData = 0;
	idx_pos = 0;
}


template <class T>
void List<T>::LInsert(T data) {
	list[NumberOfData] = data;
	NumberOfData++;
}

template <class T>
bool List<T>::LHead(T *pdata) {
	idx_pos = 0;
	if (NumberOfData == 0 || (idx_pos >= NumberOfData)) {
		return false;
	}
	else {
		*pdata = list[idx_pos];
		idx_pos++;
		return true;
	}
}

template <class T>
bool List<T>::LNext(T *pdata) {
	if (NumberOfData == 0 || (idx_pos >= NumberOfData)) {
		return false;
	}
	else {
		*pdata = list[idx_pos];
		idx_pos++;
		return true;
	}
}

template <class T>
bool List<T>::LSearch(T target, int *pos) {
	for (int c = *pos; c < NumberOfData; c++) {
		if (list[c] == target) {
			*pos = c;
			return true;
		}
	}
	return false;
}

template <class T>
bool List<T>::LRemove(T target) {
	int pos = 0;
	while(true) {
		if (this->LSearch(target, &pos)) {
			for (int c = pos; c < NumberOfData; c++) {
				list[c] = list[c + 1];
			}
			NumberOfData--;
			pos--;
		}
		else {
			pos++;
		}
		if (pos == NumberOfData) {
			return true;
		}

	}
	return false;
}

template <class T>
int List<T>::LCount() {
	return NumberOfData;
}
