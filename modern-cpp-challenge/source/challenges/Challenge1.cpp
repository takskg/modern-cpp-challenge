#include "challenges/Challenge.h"
#include <iostream>


/*
	3‚Ü‚½‚Í5‚ÅŠ„‚èØ‚ê‚é³‚Ì”‚Ì‘˜a

	—^‚¦‚ç‚ê‚½ãŒÀ‚Ü‚Å‚Ì‚R‚Ü‚½‚Í‚T‚ÅŠ„‚èØ‚ê‚é³‚Ì”‚Ì‘˜a‚ğŒvZ‚µ‚Äo—Í‚·‚éƒvƒƒOƒ‰ƒ€‚ğ‘‚«‚È‚³‚¢B
*/
int Challenge1::run(int argc, char* argv[])
{
	int retval = 0;

	std::cout << "Å‘å”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	u64 maxValue;
	std::cin >> maxValue;

	int resultValue = 0;
	for (int val=3; val<=maxValue; ++val)
	{
		if (val % 3 == 0 || val % 5 == 0)
		{
			resultValue += val;
		}
	}

	std::cout << "‘˜a‚Í " << resultValue << " ‚Å‚·";

	return retval;
}
