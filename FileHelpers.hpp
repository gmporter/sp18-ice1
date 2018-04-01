#ifndef FILEHELPERS_HPP
#define FILEHELPERS_HPP

#include <string>

using namespace std;

class FileNotFoundException : public exception { };

/*
 * Opens the specified file, and returns the contents as a string
 * object.  The file is treated as binary data.
 */
string readFile(string filename) /* throws FileNotFoundException */;

#endif // FILEHELPERS_HPP
