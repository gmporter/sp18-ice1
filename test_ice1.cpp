#include <iostream>
#include <fstream>

#include "FileHelpers.hpp"
#include "CalcFramer.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " [test_file]" << endl;
        return -1;
    }

	const char * fn = argv[1];		// the input filename

	// This block of code reads the given test file as input
	// and stores its contents in the 'test_str' variable
	string test_str;
	try {
		test_str = readFile(fn);
	} catch (FileNotFoundException& fnf) {
		cerr << "File not found: " << fn << endl;
		return -1;
	}

	CalcFramer framer;
	// put any test code here that uses your framer

	cout << test_str << endl;

	return 0;
}
