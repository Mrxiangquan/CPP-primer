#include"allTitles.h"
#include<iostream>
#pragma once

//��д���򣬴�cin��ȡһ������������
void title_1_16(){
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "sum is " << sum << std::endl;
}