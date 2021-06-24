#pragma once

#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Base
{
	public:
		virtual ~Base(){};
};

class A :public Base
{
	public:
		~A(){cout<< "i was an A" << endl;};
};

class B :public Base
{
	public:
		~B(){cout << "i was a B" << endl;};
};

class C :public Base
{
	public:
		~C(){cout << "i was a C" << endl;};
};
