#include "stdafx.h"
#include"Pimpl.h"

Test::Test(std::string name)
{
	pImpl = new TestImpl(name);
}

Test::~Test()
{
	if (pImpl)
	{
		delete pImpl;
	}
}

std::string Test::get_name()
{
	return pImpl->get_name();
}