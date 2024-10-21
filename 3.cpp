#include <iostream>
#include <vector>

int argmax(const std::vector<float>& masiv) 
{
	int ind = 0;
	float maxim;

	if (masiv.size() != 0) 
	{
		maxim = masiv[0];
		for (int i = 0; i < masiv.size(); ++i) 
		{
			if (masiv[i] > maxim) 
			{
				maxim = masiv[i];
				ind = i;
			}
		}

		return ind;
	}
	else 
	{
		return -1;
	}
	
}

int main()
{
	std::vector<float> masiv;
	float a;
	int razmer;
	std::cout << "input size masiv ";
	std::cin >> razmer;
	for(int i = 0; i < razmer; ++i) {
		std::cin >> a;
		masiv.push_back(a);
	}

	std::cout << argmax(masiv);
}
