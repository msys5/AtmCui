// main.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "input.h"
#include "kokyaku.h"
#include "nyukin.h"
#include "hikidashi.h"

//int main() {
//	input i;
//	i.nyu();
//
//	system("pause");
//	return 0;
//}

int main()
{
    input input;
	kokyaku kokyaku;
	nyukin nyukin(&kokyaku);
	hikidashi hikidashi(&kokyaku);

	int command = 0;

	while (command != 9)
	{
		int id = 0;
		command = input.getCommand(id);

		switch (command)
		{
		case 1:
			nyukin.nyukinByID(id);
			break;
		case 2:
			hikidashi.hikidashiByID(id);
			break;
		case 3:
			kokyaku.passwordHenkou(id);
			break;
		default:
			break;
		}
	}

	std::cout << "ご利用ありがとうございました。" << std::endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
