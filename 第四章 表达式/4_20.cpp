#include "allTitle.h"

void title_4_20() {
	vector<string> temp(5, "Hello");
	auto iter = temp.begin();
	cout << *iter++ << endl;
	//stringû��++������
	//cout << (*iter)++ << endl;
	//������û��empty����
	//cout << *iter.empty() << endl;
	cout << iter->empty() << endl;
	//stringû��++������(iter����*��ϣ�����++��ϣ�����++*iter�ǿ��Ե�)
	//cout << ++ *iter << endl;
	cout << iter++->empty() << endl;
}