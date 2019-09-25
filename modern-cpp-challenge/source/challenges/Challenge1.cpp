#include "challenges/Challenge.h"
#include <iostream>


/*
	3または5で割り切れる正の数の総和

	与えられた上限までの３または５で割り切れる正の数の総和を計算して出力するプログラムを書きなさい。
*/
int Challenge1::run(int argc, char* argv[])
{
	int retval = 0;

	std::cout << "最大数を入力してください" << std::endl;

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

	std::cout << "総和は " << resultValue << " です";

	return retval;
}
