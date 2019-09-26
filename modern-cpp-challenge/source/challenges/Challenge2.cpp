#include "challenges/Challenge.h"
#include <iostream>
#include <algorithm>



/*
	ユークリッドの互除法で最大公約数を求める
*/
u64 CalcGetGcd(u64 max, u64 min)
{
	u64 result = 0;

	result = max % min;
	if (result == 0)
	{
		result = min;
	}
	else
	{
		result = CalcGetGcd(min, result);
	}

	return result;
}

/*
	最大公約数

	与えられた２個の正の整数の最大公約数を計算して出力するプログラムを書きなさい。
*/
int Challenge2::run(int argc, char* argv[])
{
	std::cout << "正の整数を２つ入力してください" << std::endl;

	u64 val1, val2;
	std::cin >> val1;
	std::cin >> val2;

	u64 gcdVal = 0;
	if (val1 != 0 || val2 != 0)
	{
		gcdVal = CalcGetGcd(std::max(val1, val2), std::min(val1, val2));
	}
	else {
		//どちらかが0なら最大公約数は0
		//することなし
	}
	std::cout << val1 << " と " << val2 << " の最大公約数は " << gcdVal << " です。" << std::endl;

	return 0;
}