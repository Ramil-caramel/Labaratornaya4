#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string &str, char sep) 
{
	std::string prom;
	std::vector<std::string> itog;
	for (int i = 0; i < str.size(); ++i) 
	{
		if (str[i] != sep) 
		{
			prom += str[i];
		}
		else 
		{
			itog.push_back(prom);
			prom = {};
		}
	}
	itog.push_back(prom);
	return itog;
}


int main()
{
	std::vector<std::string> a;
	std::string str;
	char sep;
	std::getline(std::cin, str);
	std::cin.get(sep);
	
	a = split(str, sep);

	for (int i = 0; i < a.size(); ++i) 
	{
		std::cout << "\"" << a[i] << "\"" << ",";
	}
}
