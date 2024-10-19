#include <iostream>
#include <vector>

void sort(std::vector<float>& masiv)
{
	int b;
	for (int i = 0; i < 6; i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			if (masiv[j] < masiv[j + 1])
			{
				b = masiv[j + 1];
				masiv[j + 1] = masiv[j];
				masiv[j] = b;
			}
		}
	}
}


int main()
{
	std::vector<float> masiv;
	float masiv_el;

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> masiv_el;
		masiv.push_back(masiv_el);
	}

	sort(masiv);

	for (int i = 0; i < 6; ++i)
	{
		std::cout << masiv[i] << " ";
	}
}
