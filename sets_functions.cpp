//
// Created by Глеб on 30.04.22.
//

#include "sets_functions.h"

vector<int> getSetUni() {
    // заполнение универсума
    vector<int> uni;


    uni.reserve(201);
    for (int i = -100; i<101; i++) {
        uni.push_back(i);
    }
    return uni;
}


void fulling_set(vector<int> &set) {
    // Пользователь вводит мощность графика А
    int size, element;
    cout << endl << "Введите мощность множества:\n>>> ";
    cin >> size;
    set.reserve(size);

    //Пользователь вводит элементы графика
    for (int i = 0; i < size; i++) {
        cout << "Введите " << i + 1 << " элемент множества: ";
        cin >> element;
        set.push_back(element);
    }
}


void fulling_set(vector<int> &set, char name) {
    // Пользователь вводит мощность графика А
    int size, element;
    cout << endl << "Введите мощность множества "<< name << ":\n>>> ";
    cin >> size;
    set.reserve(size);

    //Пользователь вводит элементы графика
    for (int i = 0; i < size; i++) {
        cout << "Введите " << i + 1 << " элемент множества: ";
        cin >> element;
        set.push_back(element);
    }
}


void print(vector<int> set) {
    cout << "{";
    for (auto it: set) {
        if (it == set.back())
            cout << it;
        else
            cout << it << ", ";
    }
    cout << "}";
}

//void print(vector<int> set, string output) {
//    cout << output << " = {";
//    for (auto it: set) {
//        if (it == set.back())
//            cout << it;
//        else
//            cout << it << ", ";
//    }
//    cout << "}" << endl;
//}


vector<int> cross(vector<int> &set_A, vector<int> &set_B) {
    vector<int> set_C; // Создается пустой график C.

    for (auto i: set_A) {             // Выбираем элемент графика А.
        for (auto j: set_B) {         // Выбираем элемент графика В.
            if (i ==j)                    // Если выбранный элемент графика А равен выбранному элементу графика В,
                set_C.push_back(j);     // то элемент графика В записываем в графика C
        }
    }

    return set_C;
}

vector<int> unite(vector<int> &set_A, vector<int> &set_B) {
    vector<int> set_C;        // Создается пустой график C.
    set_C.reserve(set_A.size());

    // записываем все элементы графика А в график C
    for (auto i: set_A) {
        set_C.push_back(i);
    }

    for (auto i: set_B)                  // Выбираем элемент графика B.
        for (auto j: set_A)              // Выбираем элемент графика A.
            if (i != j) {
                if (j == set_A.back())   // Если выбранный элемент графика А является последним и не равен выбранному элементу
                    set_C.push_back(i);  // графика В, то записываем выбранный элемент графика В во график С
            } else
                break;

    return set_C;
}


vector<int> difference(vector<int> &set_A, vector<int> &set_B) {
    vector<int> set_C;           //Создается пустой график C.

    for (auto i: set_A) {                   // Выбираем элемент графика А.
        for (auto j: set_B) {               // Выбираем элемент графика В.
            if (j != i) {                   // Если элемент графика В не равен эл. графика. А
                if (j == set_B.back())      // Если элемент B - последний эл
                    set_C.push_back(i);     // то добавляем элемент графика А в массив С
            } else
                break;
        }
    }
    return set_C;
}

vector<int> sim_difference(vector<int> &set_A, vector<int> &set_B) {
    vector<int> set_C;           //Создается пустой график C.
    vector<int> T1;
    vector<int> T2;

    T1 = difference(set_A, set_B);
    T2 = difference(set_B, set_A);
    set_C  = unite(T1,T2);
    return set_C;
}

vector<int> addition(vector<int> &set, vector<int> &uni) {
    vector<int> set_C;           //Создается пустой график C.

    for (auto i: uni) {                     // Выбираем элемент графика U
        for (auto j: set) {               // Выбираем элемент из A.
            if (i != j) {                   // Если элемент графика А не равен эл из uni
                if (j == set.back())      // Если элемент графика A - последний эл
                    set_C.push_back(i);     // то добавляем элемент графика uni в массив С
            } else
                break;
        }
    }
    return set_C;
}

vector<pair<int,int>> decart(vector<int> &set_A, vector<int> &set_B) {
    vector<pair<int,int>> set_C;
    pair<int,int> point;

    for (auto i : set_A) {
        for (auto j : set_B) {
            point.first = i;
            point.second = j;
            set_C.push_back(point);
        }
    }
    return set_C;
}