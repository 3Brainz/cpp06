#include <casta.hpp>
void	toCharConv(float val)
{
	char toPrint = static_cast<char>(val);
	cout << "char: ";
	if (val < CHAR_MIN || val > CHAR_MAX || isnan(val))
		cout << "impossible";
	else if (isprint(toPrint))
		cout << toPrint;
	else
		cout << "not displayable";
	cout << endl;
}

void	toIntConv(float val)
{
	int	toPrint = static_cast<int>(val);
	cout << "int: ";
	if (val < INT_MIN || val > INT_MAX || isnan(val))
		cout << "impossible";
	else
		cout << toPrint;
	cout << endl;
}

void toFloatConv(float val)
{
	string appendix = ((val - static_cast<int>(val)) != 0 ? "" : ".0");
	cout << "float: " << val << appendix << "f" << endl;
}

// void	toFloatConv(float val)
// {

// }

void	toDoubleConv(float val)
{
	float toPrint = static_cast<double>(val);
	cout << "double: " << toPrint << endl;
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
	{
		cout << "ERROR: Too few arguments" << endl;
		return (1);
	}
	if (argc > 2)
	{
		cout << "ERROR: Too many arguments" << endl;
		return (2);
	}
	string a = argv[1];
	float	value = atof(a.c_str());
	toCharConv(value);
	toIntConv(value);
	toFloatConv(value);
	toDoubleConv(value);
}