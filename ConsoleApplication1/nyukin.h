#pragma once

#include "kokyaku.h"

class nyukin
{
private:
	kokyaku* _kokyaku;

public:
	nyukin(kokyaku* kokyaku)
		: _kokyaku(kokyaku) {
	
	}

	void nyukinByID(int id);
};

