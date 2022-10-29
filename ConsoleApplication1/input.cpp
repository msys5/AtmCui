#include <iostream>
#include <stdio.h>
#include "input.h"

//class input {
//public:
//    int a = 0; int b = 0;
//    int int = 0;
//    nyukin N;
//    hikidasi H;
//    kokyaku K;
//
//    void nyu() {
//        cout << "利用内容を入力してください\n";
//        cout << "1:入金\n" << "2:引出\n" << "3:パスワード変更\n";
//        cin >> in;
//
//        switch (in) {
//        case 1: N.N(); break;
//        case 2: H.H(); break;
//        case 3: K.pasuhen(); break;
//        default: cout << "登録がありません\n";
//        }
//    }
//};

int input::getCommand(int& id)
{
    char input[10] = { 0 };
    int command = 0;

    while (true)
    {
        std::cout << "利用内容を入力してください" << std::endl;
        std::cout << "1:入金" << std::endl;
        std::cout << "2:引出" << std::endl;
        std::cout << "3:パスワード変更" << std::endl;
        std::cout << "9:終了" << std::endl;
        std::cin >> input;
        if (input != nullptr) {
            command = atoi(input);
            if (command > 0 && command < 4) {
                break;
            }
            if (command == 9) {
                return command;
            }
        }
    }

    while (true)
    {
        std::cout << "IDを入力してください (1 - 3)" << std::endl;
        std::cin >> input;
        if (input != nullptr) {
            id = atoi(input);
            if (id > 0 && id < 4) {
                break;
            }
        }
    }

    return command;
}
