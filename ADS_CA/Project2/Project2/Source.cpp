/*program to search for a word in a file
  code found on http://www.cplusplus.com/forum/beginner/141904/ 27/10/2016 
  used http://www.cplusplus.com/reference/string/string/find/ 27/10/2016 
  to help explain and fix the code*/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int countwords = 0;
	string path;
	string line;
	string word = "ca";

	ifstream File("text.txt");
	if (File.is_open())
	{

		//cout << "Write the word you're searching for." << endl;
		//cin >> word;
		while (getline(File, line)) //reading in line by line of a file
		{
			size_t found = line.find(word);
			if (found != string :: npos){
				countwords++;
				cout << "found in line " << line << endl;
			}
			else {
				cout << "word not found"<<endl;
			}
		}
		cout << "The word has been found " << countwords << " times." << endl;
		File.close();
	}
	else
	{
		cout << "Error! File not found!";
	}
	system("pause");
}