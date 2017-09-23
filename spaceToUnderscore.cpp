#include <array>
#include <string>

using namespace std;


string spaceToUnderscore(string spacedStr) {
	string valCh = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int indexBeg = spacedStr.find_first_of(valCh);
	int indexEnd = spacedStr.find_last_of(valCh);
	if (indexEnd == spacedStr.length() - 1) { indexEnd = indexEnd++; }
	string underStr = spacedStr.substr(indexBeg, indexEnd);

	int underLen = underStr.length();
	for (int index = 0; index < underLen - 1; index++)
	{
		if (underStr[index] == ' ') {
			underStr[index] = '_';
		}
	}
	return underStr;
}