#include <iostream>
#include "graphics_functions.h"
#include "sets_functions.h"
#include "Match.h"

using namespace std;


int main() {
    int choose;

    Match A;
    Match B;
    Match uni;

    uni = getMatchUni();

    cout << "Заполнение соответствия A:";
    fulling_match(A);
    cout << endl;
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
        << endl;
    cout<< ">>> ";
    cin>> choose;

    // далее идут сами операции
    Match C;
    switch (choose) {

        case 1 : {
            C = cross(A, B);
            break;
        }

        case 2 : {
            C = unite(A, B);
            break;
        }

        case 3 : {
            C = difference(A, B);
            break;
        }

        case 4 : {
            C = difference(B, A);
            break;
        }

        case 5 : {
            C = sim_difference(A, B);
            break;
        }

        case 6 : {
            C = addition(A, uni);
            break;
        }

        case 7 : {
            C = addition(B, uni);
            break;
        }
        case 8 : {
            C = inversion(A);
            break;
        }

        case 9 : {
            C = inversion(B);
            break;
        }

        case 10 : {
            C = composition(A, B);
            break;
        }

        case 11 : {
            C = composition(B, A);
            break;
        }

        case 12 : {
            C = narrowing(A);
            break;
        }

        case 13 : {
            C = narrowing(B);
            break;
        }
        default:
            cout << "Неправильное значение!";
    }

    cout << endl;
    cout << "Соответствие С = <X,Y,G>, где:" << endl;
    print(C); cout << endl;


    cout << endl << endl << "Программа завершена.";

    return 0;
}


