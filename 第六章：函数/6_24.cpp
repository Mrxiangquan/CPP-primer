#include "allTitle.h"

void print(const int ia[10]) {
	for (size_t i = 0; i != 10; ++i) {
		cout << ia[i] << endl;
	}
}

void title_6_24() {
	int array1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int array2[9] = { 0,1,2,3,4,5,6,7,8 };
	print(array1);
	cout << "如果传递一个不是期望大小的数组呢？" << endl;
	print(array2);
}



