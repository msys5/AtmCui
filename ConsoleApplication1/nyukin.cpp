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
	std::cout << "入金額を入力してください" << std::endl;
	std::cin >> kingaku;
	_kokyaku->ire(id, kingaku, zandaka);
	std::cout << "入金を完了しました。残高は" << zandaka << "円です。" << std::endl;
}
