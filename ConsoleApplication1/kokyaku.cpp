#include <iostream>
#include <stdio.h>
#include "kokyaku.h"

bool kokyaku::passwordCheck(int id)
{
	char input[PasswordLengthMax + 1] = { 0 };
	std::cout << "�p�X���[�h����͂��Ă�������" << std::endl;
	std::cin >> input;

	if (input != nullptr && strcmp(input, _password[id - 1]) == 0) {
		return true;
	}
	else {
		std::cout << "�p�X���[�h���Ⴂ�܂�" << std::endl;
		return false;
	}
}

void kokyaku::passwordHenkou(int id)
{
	char input[PasswordLengthMax + 1] = { 0 };
	std::cout << "���݂̃p�X���[�h����͂��Ă�������" << std::endl;
	std::cin >> input;

	if (input != nullptr && strcmp(input, _password[id - 1]) == 0) {
		std::cout << "�V�����p�X���[�h����͂��Ă�������" << std::endl;
		std::cin >> input;
		strcpy_s(_password[id - 1], input);
		std::cout << "�p�X���[�h��[" << input << "]�ɕύX����܂���" << std::endl;
	}
	else {
		std::cout << "�p�X���[�h���Ⴂ�܂�" << std::endl;
	}
}

void kokyaku::ire(int id, int kingaku, int& zandaka)
{
	_zandaka[id - 1] += kingaku;
	zandaka = _zandaka[id - 1];
}

void kokyaku::dashi(int id, int kingaku, int& zandaka)
{
	_zandaka[id - 1] -= kingaku;
	zandaka = _zandaka[id - 1];
}
