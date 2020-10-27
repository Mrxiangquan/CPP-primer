#include"allTitles.h"
#include<iostream>
#pragma once

//编写程序，从cin读取一组数，输出其和
void title_1_16(){
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "sum is " << sum << std::endl;
}