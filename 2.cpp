#include <iostream>
#include <vector>

std::pair<float, float> minMax(const std::vector<float>& masiv) 
{
	std::pair<float, float>para;
	float minim, maxim;
	if (masiv.size() != 0) 
	{
		minim = masiv[0];
		maxim = masiv[0]; // у нас наибольшее значение float не определенно конечно!!!! поэтому через этот шедевр
		for (int i = 0; i < masiv.size(); ++i)
		{
			if (masiv[i] > maxim)
			{
				maxim = masiv[i];
			}
			if (masiv[i] < minim)
			{
				minim = masiv[i];
			}
		}

		para.first = minim;
		para.second = maxim;
		return para;
	}
	else {
		para.first = std::numeric_limits<float>::min();
		para.second = std::numeric_limits<float>::max();
		return para;
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

	std::cout << minMax(masiv).first << " " << minMax(masiv).second;
}
