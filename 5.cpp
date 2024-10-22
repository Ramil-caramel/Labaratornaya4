#include <iostream>
#include <vector>

bool remove_first_negative_element(std::vector<int>& vec, int& removed_element) //а как мы можем удалить если ссылка константная?
{
	for (int i = 0; i < vec.size(); i++) 
	{
		if (vec[i] < 0) 
		{
			removed_element = vec[i];
			vec.erase(vec.begin() + i);
			return true;
		}
	}
	return false;
}

int main()
{
	int removed_element = 0,a,razmer;
	std::vector<int> vec;
	std::cout << "input size masiv ";
	std::cin >> razmer;

	for (int i = 0; i < razmer; ++i) {
		std::cin >> a;
		vec.push_back(a);
	}
	std::cout << remove_first_negative_element(vec, removed_element);
}
