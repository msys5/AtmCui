#pragma once

#include "kokyaku.h"

class hikidashi
{
private:
	kokyaku* _kokyaku;

public:
	hikidashi(kokyaku* kokyaku)
		: _kokyaku(kokyaku) {

	}

	void hikidashiByID(int id);
};

