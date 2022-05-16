#include <iostream>
#include "Match.h"

using namespace std;


int main() {
    int choose;

    Match A;
    Match B;
    Match uni;

    // задаём соответствие А
    cout << "Заполнение соответствия A:";
    fulling_match(A);
    cout << endl;
    // задаём соответствие B
    cout << "Заполнение соответствия B:" << endl;
    fulling_match(B);

    cout << endl;
    cout << "Соответствие A = <X,Y,G>, где:" << endl;
    print(A); cout << endl;

    cout << "Соответствие B = <X,Y,G>, где:" << endl;
    print(B); cout << endl;

    cout<< endl;

    // Пользователь выбирает какую операцию над графиками выполнить
    cout<< "Выберите действие:"
           "\nПересечение - 1"
           "\nОбъединение - 2"
           "\nРазность A\\B - 3"
           "\nРазность B\\A - 4"
           "\nСимметрическая разность - 5"
           "\nДополнение A - 6"
           "\nДополнение B - 7"
           "\nИнверсия А - 8"
           "\nИнверсия B - 9"
           "\nКомпозиция А и B - 10"
           "\nКомпозиция B и A - 11"
           "\nСужение А - 12"
           "\nСужение B - 13"
           "\nПродолжение А - 14"
           "\nПродолжение B - 15"
           "\nОбраз А - 16"
           "\nОбраз B - 17"
           "\nПрообраз А - 18"
           "\nПрообраз B - 19"
        << endl;
    cout<< ">>> ";
    cin>> choose;

    // далее идут сами операции
    Match C;
    switch (choose) {

        case 1 : {
            // Если пользователь выбирает пересечение
            C = cross(A, B);
            break;
        }

        case 2 : {
            // Если пользователь выбирает объединение
            C = unite(A, B);
            break;
        }

        case 3 : {
            // Если пользователь выбирает разность
            C = difference(A, B);
            break;
        }

        case 4 : {
            // Если пользователь выбирает разность
            C = difference(B, A);
            break;
        }

        case 5 : {
            // Если пользователь выбирает симмитрическую разность
            C = sim_difference(A, B);
            break;
        }

        case 6 : {
            // дополнение
            C = addition(A);
            break;
        }

        case 7 : {
            // дополнение
            C = addition(B);
            break;
        }
        case 8 : {
            // Если пользователь выбирает инверсию
            C = inversion(A);
            break;
        }

        case 9 : {
            // Если пользователь выбирает инверсию
            C = inversion(B);
            break;
        }

        case 10 : {
            // Если пользователь выбирает композицию
            C = composition(A, B);
            break;
        }

        case 11 : {
            // Если пользователь выбирает композицию
            C = composition(B, A);
            break;
        }

        case 12 : {
            // Если пользователь выбирает сужение
            C = narrowing(A);
            break;
        }

        case 13 : {
            // Если пользователь выбирает сужение
            C = narrowing(B);
            break;
        }
        case 14 : {
            // Если пользователь выбирает продолжение
            C = ToBeContinued(A);
            break;
        }

        case 15 : {
            // Если пользователь выбирает продолжение
            C = ToBeContinued(B);
            break;
        }
        case 16 : {
            // Если пользователь выбирает образ
            vector<int> C1;
            C1 = image(A);
            cout << "Образ соответствия А на множестве М: ";
            print(C1);
            return 0;
            break;
        }

        case 17 : {
            // Если пользователь выбирает образ
            vector<int> C1;
            C1 = image(B);
            cout << "Образ соответствия B на множестве М: ";
            print(C1);
            return 0;
            break;
        }
        case 18 : {
            // Если пользователь выбирает прообраз
            vector<int> C1;
            C1 = preimage(A);
            cout << "Прообраз соответствия А на множестве N: ";
            print(C1);
            return 0;
            break;
        }

        case 19 : {
            // Если пользователь выбирает прообраз
            vector<int> C1;
            C1 = preimage(B);
            cout << "Прообраз соответствия B на множестве N: ";
            print(C1);
            return 0;
            break;
        }
        default:
            cout << "Неправильное значение!";
    }

    // выводим результат операции

    cout << endl;
    cout << "Соответствие С = <X,Y,G>, где:" << endl;
    print(C);
    cout << endl;


    cout << endl << endl << "Программа завершена.";

    return 0;
}