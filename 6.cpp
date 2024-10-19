#include <iostream>
#include <string>


std::string replace(const std::string& str, const std::string& old, const std::string& new_string)
{
	std::string fin;
	int flag = 0;

	for (int i = 0; i < str.size(); ++i) 
	{
		if (str[i] == old[0]) {
			for (int j = 0; j < old.size(); ++j)
			{
				if (str[i] == old[j] and i < str.size())
				{
					++flag;
					i += 1;
				}
			}
			i -= flag;
			if (flag == old.size()) {
				fin += new_string;
				i += old.size() - 1;
			}
			flag = 0;
		}
		else {
			fin += str[i];
		}
	}

	return fin;

}

int main()
{
	std::string str, old, new_str, itog;

	std::getline(std::cin, str);
	std::getline(std::cin, old);
	std::getline(std::cin, new_str);

	for (int i = 0; i < str.size(); ++i) {
		std::cout << str[i];
	}
	std::cout << std::endl;

	itog = replace(str, old, new_str);

	for (int j = 0; j < itog.size(); ++j) {
		std::cout << itog[j];
	}
	
}
