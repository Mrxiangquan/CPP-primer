#include "allTitle.h"

int title_6_54(int a, int b);
int title_6_55(int a, int b);
vector <decltype(title_6_54)*> ptrFunc;

/*
* ��ͬ�Ĵ����ں������ڿ���ʹ�ã������ں�����ͻ����
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

