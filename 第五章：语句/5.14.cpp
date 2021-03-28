#include "allTItle.h"

void title_5_14() {
	string read, temp;
	int count = 1;
	while (cin >> read) {
		if (read != temp) {
			if (temp != "") {
				cout << temp + "连续出现了" << count << "次" << endl;
			}
			temp = read;
			count = 1;
		}
		else
			++count;
	}
	return;
}