#include <classes.hpp>



Base * generate(void)
{
	int a = rand() % 3;
	switch (a)
	{
	case 0:
		return (new A);
		break;
	case 1:
		return (new B);
		break;
	default:
		return (new C);
		break;
	}
	return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		cout << "A" << endl;
	else if (dynamic_cast<B*>(p))
		cout << "B" << endl;
	else if (dynamic_cast<C*>(p))
		cout << "C" << endl;
	else
		cout << "houston we have a problem" << endl;
}

void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		cout << "A" << endl;
	}
	catch(const std::exception& e)
	{
		(void) (e);
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)(b);
		cout << "B" << endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		(void) (c);
		cout << "C" << endl;
	}
	catch(const std::exception & e)
	{
		(void)e;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	srand(time(NULL));
	Base *wodoo_doll = generate();
	identify(wodoo_doll);
	identify(*wodoo_doll);
	delete (wodoo_doll);
	return (0);
}