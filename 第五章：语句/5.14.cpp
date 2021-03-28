#include "allTItle.h"

void title_5_14() {
	string read, temp;
	int count = 1;
	while (cin >> read) {
		if (read != temp) {
			cout << temp + "出现了" << count << "次" << endl;
			temp = read;
			count = 1;
		}
		else
			++count;
	}
}