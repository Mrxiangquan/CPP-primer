#include "allTitle.h"

//����������������ӵĲ���,�Լ���ǰ��������ȥ����������õ���ֵ
void add(){
	vector<int> i(10, 1);
	auto beg = i.cbegin();
	auto end = i.cend();
	auto distance = beg - end;
	//������ָ��δ֪Ԫ�ػᱨ��
	//auto mid = beg + (beg - end) / 2;
	auto mid = beg + (end - beg) / 2;
	cout << *mid << endl;
}