#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}


int main()
{
	ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
      cout << "The file stream has been created!" << "\n";
    }

    if (my_file) {
        cout << "The file stream has been created!" << "\n";
        string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }

	return 0;
}