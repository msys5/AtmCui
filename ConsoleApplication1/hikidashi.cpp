#include <iostream>
#include <stdio.h>
#include "hikidashi.h"

//class hikidasi {
//public:
//	int a, b, in;
//
//	void H() {
//		kokyaku K;
//		cout << "�����ԍ�����͂��Ă�������\n";
//		cin >> a;
//		cout << "�p�X���[�h����͂��Ă�������\n";
//		cin >> in;
//
//		if (in == K.pass && a == K.Id[0]) {
//
//		}
//	}
//};

void hikidashi::hikidashiByID(int id)
{
	if (!_kokyaku->passwordCheck(id)) {
		return;
	}

	int kingaku = 0;
	int zandaka = 0;
	std::cout << "���o�z����͂��Ă�������" << std::endl;
	std::cin >> kingaku;
	_kokyaku->dashi(id, kingaku, zandaka);
	std::cout << "���o���������܂����B�c����" << zandaka << "�~�ł��B" << std::endl;
}
