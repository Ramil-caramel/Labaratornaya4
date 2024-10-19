#include <iostream>
#include <vector>

std::string join(const std::vector<std::string> &masiv, const std::string &sep)
{
	std::string str;
	for (int i = 0; i < masiv.size()-1; ++i) 
	{
		str += masiv[i];
		str += sep;
	}
	str += masiv[masiv.size() - 1];
	return str;
}


int main()
{
	std::vector<std::string> masiv;
	std::string masiv_el, sep;
	std::cin >> sep;

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> masiv_el;
		masiv.push_back(masiv_el);
	}

	

	std::cout << join(masiv, sep);
}
