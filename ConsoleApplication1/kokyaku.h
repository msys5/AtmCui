#pragma once

class kokyaku
{
private:
	static const int KokyakuCount = 10;
	static const int PasswordLengthMax = 10;

	char _password[KokyakuCount][PasswordLengthMax + 1] = {"tanaka", "suzuki", "satou"};
	int _id[KokyakuCount] = { 1, 2, 3 };
	int _zandaka[KokyakuCount] = { 10000, 20000, 30000 };
	const char* _name[KokyakuCount] = { "“c’†", "—é–Ø", "²“¡" };

public:
	bool passwordCheck(int id);
	void passwordHenkou(int id);
	void ire(int id, int kingaku, int& zandaka);
	void dashi(int id, int kingaku, int& zandaka);
};

