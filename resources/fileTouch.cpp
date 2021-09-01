#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
	string fileName = argv[1];
	for(int i = 2; i < argc; i ++)
	{
		string path = argv[i];
		path += '/';
		path += fileName;

		ofstream ofile(path.c_str(), ofstream::app);
		ofile << " ";
		ofile.close();

		cout << "Created: " << path << "  |  ";
	}
}
