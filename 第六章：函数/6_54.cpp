#include "allTitle.h"

int title_6_54(int a, int b);
int title_6_55(int a, int b);
vector <decltype(title_6_54)*> ptrFunc;

/*
* 相同的代码在函数块内可以使用，但是在函数外就会出错
int (*temp)(int a, int b);
temp = title_6_54;
temp = title_6_55;
ptrFunc.push_back(title_6_54);
*/

void hh() {
	int (*temp)(int a, int b);
	temp = title_6_54;
	temp = title_6_55;
	ptrFunc.push_back(title_6_54);
}

