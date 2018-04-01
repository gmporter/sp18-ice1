#include "FileHelpers.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

string readFile(string fn)
{
	ostringstream os;
	ifstream file(fn);
	if (file.fail()) {
		throw FileNotFoundException();
	}
	os << file.rdbuf();
	return os.str();
}
