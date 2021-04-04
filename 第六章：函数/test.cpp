#include "allTitle.h"

//测试常量指针

void const_ptr() {
	const int i = 42;
	int ci = i;
	//ptr本质上是一个int类型的指针，所以不能指向常量
	//int* const ptr = &i;
	//*ptr = 0;
}

