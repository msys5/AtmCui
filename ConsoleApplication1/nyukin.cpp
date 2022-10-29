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
	std::cout << "“ü‹àŠz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	std::cin >> kingaku;
	_kokyaku->ire(id, kingaku, zandaka);
	std::cout << "“ü‹à‚ğŠ®—¹‚µ‚Ü‚µ‚½Bc‚‚Í" << zandaka << "‰~‚Å‚·B" << std::endl;
}
