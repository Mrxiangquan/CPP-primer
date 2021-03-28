#include "allTitle.h"

void title_4_29() {
	int x[10];
	int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
}