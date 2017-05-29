#pragma once
#include <string>
class TestImpl // your original class
{

public:
	TestImpl(std::string name) :_name(name) {}
	~TestImpl() {}

	std::string get_name() { return _name; };
private:
	std::string _name;

};

class Test {
public:
	Test(std::string name);
	~Test();
	std::string get_name();

private:
    TestImpl *pImpl;
};