#include"allTitles.h"

//测试无符号数据与int加减时造成的类型转换
void change() {
	unsigned u = 10;
	int i = -42;
	cout << i + i << endl;
	cout << u + i << endl;
}

//测试初始化extern声明的变量

void initExtern() {
	//extern int x = 5;
}

//测试列表初始化
void init() {
	int temp{ 3.14 };
	cout << temp << endl;
}