#include <iostream>
#include <stdio.h>
#include "nyukin.h"

void nyukin::nyukinByID(int id)
{
	if (!_kokyaku->passwordCheck(id)) {
		return;
	}

	int kingaku = 0;
	int zandaka = 0;
	std::cout << "�����z����͂��Ă�������" << std::endl;
	std::cin >> kingaku;
	_kokyaku->ire(id, kingaku, zandaka);
	std::cout << "�������������܂����B�c����" << zandaka << "�~�ł��B" << std::endl;
}
