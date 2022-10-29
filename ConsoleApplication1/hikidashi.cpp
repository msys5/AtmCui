#include <iostream>
#include <stdio.h>
#include "hikidashi.h"

//class hikidasi {
//public:
//	int a, b, in;
//
//	void H() {
//		kokyaku K;
//		cout << "口座番号を入力してください\n";
//		cin >> a;
//		cout << "パスワードを入力してください\n";
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
	std::cout << "引出額を入力してください" << std::endl;
	std::cin >> kingaku;
	_kokyaku->dashi(id, kingaku, zandaka);
	std::cout << "引出を完了しました。残高は" << zandaka << "円です。" << std::endl;
}
