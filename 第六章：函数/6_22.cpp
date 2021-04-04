#include "allTitle.h"

void exchange(int*& ptr1, int*& ptr2) {
	if (ptr1 != nullptr && ptr2 != nullptr) {
		int* temp = ptr1;
		ptr1 = ptr2;
		ptr2 = temp;
	}
	return;
}

void title_6_22() {
	int i = 1, j = 2;
	int* i_ptr = &i, * j_ptr = &j;
	exchange(i_ptr, j_ptr);
	cout << *i_ptr << " " << *j_ptr << endl;
	return;
}
