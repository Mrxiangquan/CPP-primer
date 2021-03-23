#include "allTitle.h"

//测试两个迭代器相加的操作,以及靠前迭代器减去靠后迭代器得到的值
void add(){
	vector<int> i(10, 1);
	auto beg = i.cbegin();
	auto end = i.cend();
	auto distance = beg - end;
	//迭代器指向未知元素会报错
	//auto mid = beg + (beg - end) / 2;
	auto mid = beg + (end - beg) / 2;
	cout << *mid << endl;
}