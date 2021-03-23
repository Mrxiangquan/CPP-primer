#include "allTitle.h"


void title_3_23() {
	vector<int> temp(10, 1);
	for (auto iter = temp.begin(); iter != temp.end(); iter++) {
		cout << *iter << " ";
		(*iter) *= 2;
	}
	cout << endl;
	for (auto i : temp) {
		cout << i << " ";
	}
	cout << endl;
}