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
//        cout << "���p���e����͂��Ă�������\n";
//        cout << "1:����\n" << "2:���o\n" << "3:�p�X���[�h�ύX\n";
//        cin >> in;
//
//        switch (in) {
//        case 1: N.N(); break;
//        case 2: H.H(); break;
//        case 3: K.pasuhen(); break;
//        default: cout << "�o�^������܂���\n";
//        }
//    }
//};

int input::getCommand(int& id)
{
    char input[10] = { 0 };
    int command = 0;

    while (true)
    {
        std::cout << "���p���e����͂��Ă�������" << std::endl;
        std::cout << "1:����" << std::endl;
        std::cout << "2:���o" << std::endl;
        std::cout << "3:�p�X���[�h�ύX" << std::endl;
        std::cout << "9:�I��" << std::endl;
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
        std::cout << "ID����͂��Ă������� (1 - 3)" << std::endl;
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
