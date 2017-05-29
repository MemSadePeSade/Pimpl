// main.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include"Pimpl.h"
#include <iostream>

int main()
{
std::string string1("zxcv");
const char * string2 = string1.c_str();
Test test1(string1);
Test test2(string2);

std::cout << test1.get_name() <<"\n \n \n" << std::endl;
std::cout << test2.get_name() << std::endl;

system("pause");
return 0;
}