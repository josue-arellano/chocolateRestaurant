//882709553
//Josue Arellano

#include <iostream>
#include <string>


using namespace std;

bool is_subset(const std::string& word, const std::string& subword)
{
	string copy = word;
	string::size_type i;
	for (i = 0; i < subword.size(); ++i)
	{
		string::size_type p = copy.find(subword[i]);
		if (copy.find(subword[i]) == string::npos)
			return false;
		else copy[p] = '\0';
	}
	return true;
}

int main()
{
	string word, subword, copy;
	word = "Bubba";
	subword = "uuu";
	string::size_type p;

	bool yes;
	yes = is_subset(word, subword);
	cout << yes;
	return 0;
}