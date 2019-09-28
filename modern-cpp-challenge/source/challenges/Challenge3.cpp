#include "Challenge.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


namespace
{
	/*
		ユークリッドの互除法で最大公約数を求める
	*/
	u64 CalcGetGcd(const u64 max, const u64 min)
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
		最小公倍数を求める
	*/
	u64 CalcGetLcm(const u64 max, const u64 min)
	{
		const u64 gcdValue = CalcGetGcd(max, min);
		return gcdValue != 0 ? max * (min / CalcGetLcm(max, min)) : 0;
	}
}

/*
	最小公倍数

	与えられた２個以上の正の整数について、その最小公倍数を計算して出力するプログラムを書きなさい
*/
int Challenge3::run(int argc, char* argv[])
{
	std::cout << "正の数を２つ以上入力してください" << std::endl;
	std::cout << "いくつ入力しますか？" << std::endl;

	u64 maxNum = 0;
	std::cin >> maxNum;

	std::cout << "整数を" << maxNum << "個入力してください" << std::endl;
	std::vector<u64> values;
	values.resize(maxNum);
	for (u64 idx=0; idx<maxNum; ++idx)
	{
		std::cin >> values[idx];
	}

	const u64 lcmValue = std::accumulate(values.begin(), values.end(), 0uLL);

	std::cout << "最小公倍数は " << lcmValue << " です" << std::endl;

	return 0;
}