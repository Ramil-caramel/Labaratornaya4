#include <iostream>
#include <vector>

float mean(const std::vector<float>& a) 
{
	float sum{}, chislo{};
	for (int i = 0; i < a.size(); ++i) 
	{
		sum += a[i];
		++chislo;
	}
	return sum / chislo;
}

int main()
{
	std::vector<float> a;
	float a_el;

	for (int i = 0; i < 6; ++i) 
	{
		std::cin >> a_el;
		a.push_back(a_el);
	}

	std::cout << mean(a);
	
}
