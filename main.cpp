#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int N_A, N_B, choose;
    pair<int,int> point;
    vector<pair<int,int>> arr_A;
    vector<pair<int,int>> arr_B;

    // заполнение универсума
    vector<pair<int,int>> uni;
    uni.reserve(201);
    for (int i = -100; i<101; i++){
        for (int j = -100; j<101; j++) {
            point.first = i;
            point.second = j;
            uni.push_back(point);
        }

    }

    // Пользователь вводит мощность графика А
    cout << endl << "Введите мощность графика А:\n>>> ";
    cin >> N_A;
    arr_A.reserve(N_A);

    //Пользователь вводит элементы графика
    for (int i = 0; i < N_A; i++) {
        cout << "Введите " << i + 1 << " элемент графика: ";
        cin >> point.first >> point.second;
        arr_A.push_back(point);
    }

    // Пользователь вводит мощность графика B
    cout << endl << "Введите мощность графика B:\n>>> ";
    cin >> N_B;
    arr_B.reserve(N_B);

    //Пользователь вводит элементы графика B
    for (int i=0; i<N_B; i++) {
        cout << "Введите " << i + 1 << " элемент графика: ";
        cin >> point.first >> point.second;
        arr_B.push_back(point);
    }

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
            // Eсли пользователь выбирает операцию пересечения
            vector<pair<int, int>> arr_C;     // Создается пустой график C.

            for (auto i: arr_A) {             // Выбираем элемент графика А.
                for (auto j: arr_B) {         // Выбираем элемент графика В.
                    if (i ==
                        j)                    // Если выбранный элемент графика А равен выбранному элементу графика В,
                        arr_C.push_back(j);   // то элемент графика В записываем в графика C
                }
            }

            // результат пересечения графиков A и B.
            cout << endl << "график B∩A = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 2 : {
            // Eсли пользователь выбирает операцию объединения
            vector<pair<int, int>> arr_C;        // Создается пустой график C.
            arr_C.reserve(N_A);

            // записываем все элементы графика А в график C
            for (auto i: arr_A) {
                arr_C.push_back(i);
            }

            for (auto i: arr_B)                  // Выбираем элемент графика B.
                for (auto j: arr_A)              // Выбираем элемент графика A.
                    if (i != j) {
                        if (j == arr_C.back())   // Если выбранный элемент графика А является последним и не равен выбранному элементу
                            arr_C.push_back(i);  // графика В, то записываем выбранный элемент графика В во график С
                    } else
                        break;

            // результат пересечения графиков A и B.
            cout << endl << "График B∪A = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 3 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> arr_C;           //Создается пустой график C.

            for (auto i: arr_A) {                   // Выбираем элемент графика А.
                for (auto j: arr_B) {               // Выбираем элемент графика В.
                    if (j != i) {                   // Если элемент графика В не равен эл. графика. А
                        if (j == arr_B.back())      // Если элемент B - последний эл
                            arr_C.push_back(i);     // то добавляем элемент графика А в массив С
                    } else
                        break;
                }
            }

            // результат пересечения графиков A и B.
            cout << endl << "график A\\B = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 4 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> arr_C;         //Создается пустой график C.

            for (auto i: arr_B) {                 // Выбираем элемент графика B
                for (auto j: arr_A) {             // Выбираем элемент графика A.
                    if (j != i) {                 // Если элемент графика А не равен эл. графика. В
                        if (j == arr_A.back())    // Если элемент B - последний эл
                            arr_C.push_back(i);   // то добавляем элемент графика А в массив С
                    } else
                        break;
                }
            }

            // результат пересечения графиков A и B.
            cout << endl << "график B\\A = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 5 : {
            // Eсли пользователь выбирает операцию разности
            vector<pair<int, int>> arr_C;                   //Создается пустой график G.


            for (auto i: arr_A) {                // Выбираем элемент графика  A.
                for (auto j: arr_B) {            // Выбираем элемент графика B.
                    if (i != j) {                            // Если элемент графика  A не равен элементу графика B
                        if (j == arr_B.back())               // Если элемент графика B последний
                            arr_C.push_back(i);              // Добавляем элемент графика  A в массив С

                    } else
                        break;
                }
            }

            for (auto j: arr_B) {                 // Выбираем элемент графика B.
                for (auto i: arr_A) {             // Выбираем элемент графика A.
                    if (j != i) {                             // Если элемент графика B не равен элементу графика A
                        if (i == arr_A.back())                // Если элемент графика A последний
                            arr_C.push_back(j);               // Добавляем элемент графика B в массив С
                    } else
                        break;
                }
            }

            // результат симметрической разности.
            cout << endl << "Симметрическая разность = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";
            break;
        }

        case 6 : {
            // Eсли пользователь выбирает операцию дополнения
            vector<pair<int, int>> arr_C;           //Создается пустой график C.
            arr_C.reserve(N_A);

            for (auto i: uni) {                     // Выбираем элемент графика U
                for (auto j: arr_A) {               // Выбираем элемент из A.
                    if (i != j) {                   // Если элемент графика А не равен эл из uni
                        if (j == arr_A.back())      // Если элемент графика A - последний эл
                            arr_C.push_back(i);     // то добавляем элемент графика uni в массив С
                    } else
                        break;
                }
            }

            // результат дополнения графика A
            cout << endl << "график A^ = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 7 : {
            // Eсли пользователь выбирает операцию дополнения
            vector<pair<int, int>> arr_C;            //Создается пустой график C.
            arr_C.reserve(N_B);

            for (auto i: uni) {                     // Выбираем элемент графика U
                for (auto j: arr_B) {               // Выбираем элемент из B.
                    if (i != j) {                   // Если элемент графика А не равен эл из uni
                        if (j == arr_B.back())      // Если элемент графика B - последний эл
                            arr_C.push_back(i);     // то добавляем элемент графика B в массив С
                    } else
                        break;
                }
            }

            // результат дополнения графика A
            cout << endl << "график B^ = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }
        case 8 : {
            // Eсли пользователь выбирает операцию инверсии A
            vector<pair<int, int>> arr_C;     // Создается пустой график C

            for (auto it: arr_A) {            // Инверсируем каждый кортеж из А
                point.first = it.second;
                point.second = it.first;

                arr_C.push_back(point);
            }

            // C - результат инверсии A
            cout << endl << " Инверсия графика А = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 9 : {
            // Eсли пользователь выбирает операцию инверсии B
            vector<pair<int, int>> arr_C;                // Создается пустой график C

            for (auto it: arr_B) {           // Инверсируем каждый кортеж из B
                point.first = it.second;
                point.second = it.first;

                arr_C.push_back(point);
            }

            // C - результат инверсии B
            cout << endl << " Инверсия графика B = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 10 : {
            // Eсли пользователь выбирает операцию композиции
            vector<pair<int, int>> arr_C;                       // Создается пустой график C

            for (auto i: arr_A) {                   // Выбираем элемент графика  A.
                for (auto j : arr_B) {              // Выбираем элемент графика B.
                    if (i.second == j.first) {                  // Если вторая комапанента кортежа из графика А равна
                        point.first = i.first;                  // первой компаненте кортежа из графика B
                        point.second = j.second;                // то записываем получившийся кортеж в С

                        if (arr_C.empty())
                            arr_C.push_back(point);
                        for (auto c : arr_C) {       // если новый елемент равен елементу из C
                            if (point == c) {                    // выходим из цикла (не добавляем елемент)
                                break;
                            }
                            if (c == arr_C.back())
                                arr_C.push_back(point);          // то записываем получившийся кортеж в С
                        }
                    }
                }
            }

            // C - результат композиции АB
            cout << endl << " Композиция A и B = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";

            break;
        }

        case 11 : {
            // Eсли пользователь выбирает операцию композиции
            vector<pair<int, int>> arr_C;                       // Создается пустой график C

            for (auto i: arr_B) {                   // Выбираем элемент графика B.
                for (auto j : arr_A) {              // Выбираем элемент графика  A.
                    if (i.second == j.first) {                  // Если вторая комапанента кортежа из графика А равна
                        point.first = i.first;                  // первой компаненте кортежа из графика B
                        point.second = j.second;

                        if (arr_C.empty())
                            arr_C.push_back(point);
                        for (auto c : arr_C) {     // если новый елемент равен елементу из C
                            if (point == c) {                  // выходим из цикла (не добавляем елемент)
                                break;
                            }
                            if (c == arr_C.back())
                                arr_C.push_back(point);  // то записываем получившийся кортеж в С
                        }
                    }
                }
            }
            // C - результат композиции BА
            cout << endl << " Композиция B и A = {";
            for (auto it: arr_C) {
                if (it == arr_C.back())
                    cout << "<" << it.first << "," << it.second << ">";
                else
                    cout << "<" << it.first << "," << it.second << ">" << ", ";
            }
            cout << "}";
            break;
        }

        default:
            cout << "Неправильное значение!";
    }

    // завершение программы
    cout << endl << endl << "Программа завершена.";

    return 0;
}
