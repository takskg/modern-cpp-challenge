#include "challenges/Challenge.h"
#include <iostream>


/*
	3�܂���5�Ŋ���؂�鐳�̐��̑��a

	�^����ꂽ����܂ł̂R�܂��͂T�Ŋ���؂�鐳�̐��̑��a���v�Z���ďo�͂���v���O�����������Ȃ����B
*/
int Challenge1::run(int argc, char* argv[])
{
	int retval = 0;

	std::cout << "�ő吔����͂��Ă�������" << std::endl;

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

	std::cout << "���a�� " << resultValue << " �ł�";

	return retval;
}
