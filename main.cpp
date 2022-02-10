#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    int N_A, N_B, choose, element;
    vector<int> arr_A;
    vector<int> arr_B;

    // Пользователь вводит мощность множества А
    cout << endl << "Введите мощность множества А:\n>>> ";
    cin >> N_A;
    arr_A.reserve(N_A);

    //Пользователь вводит элементы множества A
    for (int i = 0; i < N_A; i++) {
        cout << "Введите " << i + 1 << " элемент множества: ";
        cin >> element;
        arr_A.push_back(element);
    }

    // Пользователь вводит мощность множества B
    cout << endl << "Введите мощность множества B:\n>>> ";
    cin >> N_B;
    arr_B.reserve(N_B);

    //Пользователь вводит элементы множества B
    for (int i = 0; i < N_B; i++) {
        cout << "Введите " << i + 1 << " элемент множества: ";
        cin >> element;
        arr_B.push_back(element);
    }

    std::sort(arr_A.begin(), arr_A.end());
    std::sort(arr_B.begin(), arr_B.end());

    cout << endl;

    // Пользователь выбирает какую операцию над множествами выполнить
    cout<< "Выберите действие:\nОбъдинение множеств - 1\nПересечние множеств - 2"<< endl;
    cout << ">>> ";
    cin >> choose;

    // далее идут сами операции
    switch (choose) {

        case 1: {
            // Eсли пользователь выбирает операцию объединения

            // Создается пустое множество C.
            vector<int> arr_C;
            arr_C.reserve(N_A);

            // записываем все элементы множества А в множество C
            for (auto i: arr_A) {
                arr_C.push_back(i);
            }


            for (auto i: arr_B) // Выбираем элемент множества B.
                for (auto j: arr_A) // Выбираем элемент множества A.
                    if (i != j) {
                        // Если выбранный элемент множества А является последним и не равен выбранному элементу
                        // множества В, то записываем выбранный элемент множества В во множество С.
                        if (j == arr_C.back())
                            arr_C.push_back(i);

                    } else
                        break;


            // результат пересечения множеств A и B.
            cout << endl << "Множество B∪A = {";
            for (auto x: arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 2: {
            // Eсли пользователь выбирает операцию пересечения
            //Создается пустое множество C.
            vector<int> arr_C;

            // Выбираем элемент множества А.
            for (auto i: arr_A) {
                for (auto j: arr_B) { // Выбираем элемент множества В.
                    if (i == j)
                        arr_C.push_back(j);
                    // Если выбранный элемент множества А равен выбранному элементу множества В,
                    // то элемент множества В записываем в множества C
                }
            }

            // результат пересечения множеств A и B.
            cout << endl << "Множество B∩A = {";
            for (auto x: arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
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