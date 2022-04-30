#include <iostream>
#include "graphics_functions.h"

using namespace std;

vector<pair<int,int>> getUni() {
    // заполнение универсума
    vector<pair<int,int>> uni;
    pair<int,int> point;

    uni.reserve(201);
    for (int i = -100; i<101; i++) {
        for (int j = -100; j < 101; j++) {
            point.first = i;
            point.second = j;
            uni.push_back(point);
        }
    }
    return uni;
}


int main() {
    int choose;

    vector<pair<int,int>> graphic_A;
    vector<pair<int,int>> graphic_B;
    vector<pair<int,int>> uni;

    uni = getUni();


    fulling_graphic(graphic_A);
    fulling_graphic(graphic_B);

    cout<< endl;

    // Пользователь выбирает какую операцию над графиками выполнить
    cout<< "Выберите действие:"
           "\nПересечние графиков - 1"
           "\nОбъдинение графиков - 2"
           "\nРазность A\\B - 3"
           "\nРазность B\\A - 4"
           "\nСимметрическая разность - 5"
           "\nДополнение графика A - 6"
           "\nДополнение графика B - 7"
           "\nИнверсия графика А - 8"
           "\nИнверсия графика B - 9"
           "\nКомпозиция А и B - 10"
           "\nКомпозиция B и A - 11"
        << endl;
    cout<< ">>> ";
    cin>> choose;

    // далее идут сами операции
    switch (choose) {

        case 1 : {
            vector<pair<int,int>> C;
            C = cross(graphic_A,graphic_B);
            print(C);
            break;
        }

        case 2 : {
            // Eсли пользователь выбирает операцию объединения
            vector<pair<int, int>> C;        // Создается пустой график C.
            C = unite(graphic_A, graphic_B);
            print(C);
            break;
        }

        case 3 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> C;           //Создается пустой график C.
            C = difference(graphic_A, graphic_B);
            print(C);
            break;
        }

        case 4 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> C;           //Создается пустой график C.
            C = difference(graphic_B, graphic_A);
            print(C);
            break;
        }

        case 5 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> C;                   //Создается пустой график G.
            vector<pair<int, int>> T1;
            vector<pair<int, int>> T2;

            T1 = difference(graphic_A, graphic_B);
            T2 = difference(graphic_B, graphic_A);
            C  = unite(T1,T2);

            print(C);
            break;
        }

        case 6 : {
            // Eсли пользователь выбирает операцию дополнения
            vector<pair<int, int>> C;           //Создается пустой график C.
            C = addition(graphic_A, uni);
            print(C);
            break;
        }

        case 7 : {
            // Eсли пользователь выбирает операцию дополнения
            vector<pair<int, int>> C;           //Создается пустой график C.
            C = addition(graphic_B, uni);
            print(C);
            break;
        }
        case 8 : {
            // Eсли пользователь выбирает операцию инверсии A
            vector<pair<int, int>> C;     // Создается пустой график C
            C = inversion(graphic_A);
            print(C);
            break;
        }

        case 9 : {
            // Eсли пользователь выбирает операцию инверсии A
            vector<pair<int, int>> C;     // Создается пустой график C
            C = inversion(graphic_B);
            print(C);
            break;
        }

        case 10 : {
            // Eсли пользователь выбирает операцию композиции
            vector<pair<int, int>> C;
            C = composition(graphic_A, graphic_B);
            print(C);
            break;
        }

        case 11 : {
            // Eсли пользователь выбирает операцию композиции
            vector<pair<int, int>> C;
            C = composition(graphic_B, graphic_A);
            print(C);
            break;
        }

        default:
            cout << "Неправильное значение!";
    }

    // завершение программы
    cout << endl << endl << "Программа завершена.";

    return 0;
}


