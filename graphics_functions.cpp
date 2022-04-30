//
// Created by Глеб on 30.04.22.
//

#include "graphics_functions.h"

vector<pair<int,int>> getGraphicUni() {
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

void fulling_graphic(vector<pair<int,int>> &graphic) {
    // Пользователь вводит мощность графика
    int size;
    pair<int,int> point;

    cout << endl << "Введите мощность графика:\n>>> ";
    cin >> size;
    graphic.reserve(size);

    //Пользователь вводит элементы графика
    for (int i = 0; i < size; i++) {
        cout << "Введите " << i + 1 << " элемент графика: ";
        cin >> point.first >> point.second;
        graphic.push_back(point);
    }
}


void fulling_graphic(vector<pair<int,int>> &graphic, char name) {
    // Пользователь вводит мощность графика
    int size;
    pair<int,int> point;

    cout << endl << "Введите мощность графика: " << name << "\n>>> ";
    cin >> size;
    graphic.reserve(size);

    //Пользователь вводит элементы графика
    for (int i = 0; i < size; i++) {
        cout << "Введите " << i + 1 << " элемент графика: ";
        cin >> point.first >> point.second;
        graphic.push_back(point);
    }
}


void print(vector<pair<int,int>> graphic) {
    cout << "{";
    for (auto it: graphic) {
        if (it == graphic.back())
            cout << "<" << it.first << "," << it.second << ">";
        else
            cout << "<" << it.first << "," << it.second << ">" << ", ";
    }
    cout << "}";
}

//void print(vector<pair<int,int>> graphic, string output) {
//    cout << output << " = {";
//    for (auto it: graphic) {
//        if (it == graphic.back())
//            cout << "<" << it.first << "," << it.second << ">";
//        else
//            cout << "<" << it.first << "," << it.second << ">" << ", ";
//    }
//    cout << "}" << endl;
//}


vector<pair<int,int>> cross(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B) {
    vector<pair<int,int>> graphic_C; // Создается пустой график C.

    for (auto i: graphic_A) {             // Выбираем элемент графика А.
        for (auto j: graphic_B) {         // Выбираем элемент графика В.
            if (i ==j)                    // Если выбранный элемент графика А равен выбранному элементу графика В,
                graphic_C.push_back(j);     // то элемент графика В записываем в графика C
        }
    }

    return graphic_C;
}

vector<pair<int,int>> unite(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B) {
    vector<pair<int, int>> graphic_C;        // Создается пустой график C.
    graphic_C.reserve(graphic_A.size());

    // записываем все элементы графика А в график C
    for (auto i: graphic_A) {
        graphic_C.push_back(i);
    }

    for (auto i: graphic_B)                  // Выбираем элемент графика B.
        for (auto j: graphic_A)              // Выбираем элемент графика A.
            if (i != j) {
                if (j == graphic_A.back())   // Если выбранный элемент графика А является последним и не равен выбранному элементу
                    graphic_C.push_back(i);  // графика В, то записываем выбранный элемент графика В во график С
            } else
                break;

    return graphic_C;
}

vector<pair<int,int>> difference(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B) {
    vector<pair<int, int>> graphic_C;        // Создается пустой график C.

    for (auto i: graphic_A) {                   // Выбираем элемент графика А.
        for (auto j: graphic_B) {               // Выбираем элемент графика В.
            if (j != i) {                   // Если элемент графика В не равен эл. графика. А
                if (j == graphic_B.back())      // Если элемент B - последний эл
                    graphic_C.push_back(i);     // то добавляем элемент графика А в массив С
            } else
                break;
        }
    }

    return graphic_C;
}

vector<pair<int,int>> sim_difference(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B) {     //Создается пустой график C.
    vector<pair<int, int>> set_C;           //Создается пустой график C.
    vector<pair<int, int>> T1;
    vector<pair<int, int>> T2;

    T1 = difference(graphic_A, graphic_B);
    T2 = difference(graphic_B, graphic_A);
    set_C  = unite(T1,T2);
    return set_C;
}



vector<pair<int,int>> addition(vector<pair<int,int>> &graphic, vector<pair<int,int>> &uni) {
    vector<pair<int, int>> graphic_C;           //Создается пустой график C.

    for (auto i: uni) {                     // Выбираем элемент графика U
        for (auto j: graphic) {               // Выбираем элемент из A.
            if (i != j) {                   // Если элемент графика А не равен эл из uni
                if (j == graphic.back())      // Если элемент графика A - последний эл
                    graphic_C.push_back(i);     // то добавляем элемент графика uni в массив С
            } else
                break;
        }
    }
    return graphic_C;
}

vector<pair<int,int>> inversion(vector<pair<int,int>> &graphic) {
    vector<pair<int, int>> graphic_C;           //Создается пустой график C.
    pair<int,int> point;

    for (auto it: graphic) {            // Инверсируем каждый кортеж из А
        point.first = it.second;
        point.second = it.first;

        graphic_C.push_back(point);
    }
    return graphic_C;
}

vector<pair<int,int>> composition(vector<pair<int,int>> &graphic_A, vector<pair<int,int>> &graphic_B) {
    vector<pair<int, int>> graphic_C;           //Создается пустой график C.
    pair<int,int> point;

    for (auto i: graphic_A) {                   // Выбираем элемент графика  A.
        for (auto j : graphic_B) {              // Выбираем элемент графика B.
            if (i.second == j.first) {                  // Если вторая комапанента кортежа из графика А равна
                point.first = i.first;                  // первой компаненте кортежа из графика B
                point.second = j.second;                // то записываем получившийся кортеж в С

                if (graphic_C.empty())
                    graphic_C.push_back(point);
                for (auto c : graphic_C) {       // если новый елемент равен елементу из C
                    if (point == c) {                    // выходим из цикла (не добавляем елемент)
                        break;
                    }
                    if (c == graphic_C.back())
                        graphic_C.push_back(point);          // то записываем получившийся кортеж в С
                }
            }
        }
    }
    return graphic_C;
}
