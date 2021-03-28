#include "allTitle.h"

void title_4_20() {
	vector<string> temp(5, "Hello");
	auto iter = temp.begin();
	cout << *iter++ << endl;
	//string没有++操作符
	//cout << (*iter)++ << endl;
	//迭代器没有empty对象
	//cout << *iter.empty() << endl;
	cout << iter->empty() << endl;
	//string没有++操作符(iter先与*结合，后与++结合，所以++*iter是可以的)
	//cout << ++ *iter << endl;
	cout << iter++->empty() << endl;
}