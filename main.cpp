#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N_A, N_B, choose, element;
    vector<int> arr_A;
    vector<int> arr_B;

    // заполнение универсума
    vector<int> uni;
    uni.reserve(201);
    for (int i = -100; i<101; i++){
        uni.push_back(i);
    }
    start:
    // Пользователь выбирает способ задания множеств:
    cout<< "Способ задания перечислением - 1\nСпособ задания высказыванием - 2" << endl;
    cout<< ">>> ";
    cin>> choose;

    switch (choose) {
        case 1: {
            // Если пользователь выбрал способ задания перечислением, то:

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
            for (int i=0; i<N_B; i++) {
                cout << "Введите " << i + 1 << " элемент множества: ";
                cin >> element;
                arr_B.push_back(element);
            }

            std::sort(arr_A.begin(), arr_A.end());
            std::sort(arr_B.begin(), arr_B.end());

            break;
        }
        case 2: {
            // Пользователь вводит мощность множества А
            cout << endl << "Введите мощность множества А:\n>>> ";
            cin >> N_A;
            arr_A.reserve(N_A);

            // Пользователь вводит мощность множества B.
            cout << endl << "Введите мощность множества B:\n>>> ";
            cin >> N_B;
            arr_B.reserve(N_B);
            // пусть некоторое k
            for (int k=1; k<=N_A; k++) {    // k меняется от 1 до введенного пользователем размера множества N_A
                element = 3 * k - 2;        // пусть есть нокотрый элемент element которому мы присваеваем результат выражения 3 * k - 2
                arr_A.push_back(element);   // добавляем элемент element во множество A
            }

            for (int i=1; i<=N_B; i++) {    // k меняется от 1 до введенного пользователем размера множества N_B
                element = 2 * i + 2;        // пусть есть нокотрый элемент element которому мы присваеваем результат выражения 2 * k + 2
                arr_B.push_back(element);   // добавляем элемент element во множество B
            }

            std::sort(arr_A.begin(), arr_A.end());
            std::sort(arr_B.begin(), arr_B.end());

            // Выводим заполненные множества А и В на экран:

            // Выводим множество A
            cout << endl << "Множество A = {";
            for (auto x : arr_A) {
                if (x == arr_A.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            // Выводим множество B
            cout << endl << "Множество B = {";
            for (auto x : arr_B) {
                if (x == arr_B.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}" << endl;

            break;
        }
        default:
            cout << "Неправильное значение!\n";
            goto start;
    }

    cout<< endl;

    // Пользователь выбирает какую операцию над множествами выполнить
    cout<< "Выберите действие:\nПересечние множеств - 1\nОбъдинение множеств - 2\nРазность A\\B - 3\nРазность B\\A - 4\nСимметрическая разность - 5\nДополнение множества A - 6\nДополнение множества B - 7\nДекартово произведение AxB - 8\nДекартово произведение BxA - 9\n" << endl;
    cout<< ">>> ";
    cin>> choose;

    // далее идут сами операции
    switch (choose) {

        case 2: {
            // Eсли пользователь выбирает операцию объединения

            // Создается пустое множество C.
            vector<int> arr_C;
            arr_C.reserve(N_A);

            // записываем все элементы множества А в множество C
            for(auto i : arr_A) {
                arr_C.push_back(i);
            }

            for (auto i : arr_B)                // Выбираем элемент множества B.
                for (auto j : arr_A)            // Выбираем элемент множества A.
                    if (i != j) {
                        if (j == arr_C.back())  // Если выбранный элемент множества А является последним и не равен выбранному элементу
                            arr_C.push_back(i); // множества В, то записываем выбранный элемент множества В во множество С.

                    } else
                        break;


            // результат пересечения множеств A и B.
            cout << endl << "Множество B∪A = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 1: {
            // Eсли пользователь выбирает операцию пересечения
            //Создается пустое множество C.
            vector<int> arr_C;

            for (auto i : arr_A) {            // Выбираем элемент множества А.
                for (auto j : arr_B) {        // Выбираем элемент множества В.
                    if (i == j)               // Если выбранный элемент множества А равен выбранному элементу множества В,
                        arr_C.push_back(j);   // то элемент множества В записываем в множества C
                }
            }

            // результат пересечения множеств A и B.
            cout << endl << "Множество B∩A = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 3: {
            // Eсли пользователь выбирает операцию разности
            //Создается пустое множество C.
            vector<int> arr_C;

            for (auto i : arr_A) {                  // Выбираем элемент множества А.
                for (auto j : arr_B) {              // Выбираем элемент множества В.
                    if (j != i) {                   // Если элемент множества В не равен эл. мн. А
                        if (j == arr_B.back())      // Если элемент B - последний эл
                            arr_C.push_back(i);     // то добавляем элемент множества А в массив С
                    } else
                        break;
                }
            }

            // результат пересечения множеств A и B.
            cout << endl << "Множество A\\B = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }

        case 4: {
            // Eсли пользователь выбирает операцию разности
            //Создается пустое множество C.
            vector<int> arr_C;

            for (auto i : arr_B) {                // Выбираем элемент множества B
                for (auto j : arr_A) {            // Выбираем элемент множества A.
                    if (j != i) {                 // Если элемент множества А не равен эл. мн. В
                        if (j == arr_A.back())    // Если элемент B - последний эл
                            arr_C.push_back(i);   // то добавляем элемент множества А в массив С
                    } else
                        break;
                }
            }

            // результат пересечения множеств A и B.
            cout << endl << "Множество B\\A = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 5:{
            // Eсли пользователь выбирает операцию разности
            //Создается пустое множество G.
            vector<int> arr_C;


            for (auto i: arr_A) {                // Выбираем элемент множества  A.
                for (auto j: arr_B) {            // Выбираем элемент множества B.
                    if (i != j) {                // Если элемент множества  A не равен элементу множества B
                        if (j == arr_B.back())   // Если элемент множества B последний
                            arr_C.push_back(i);  // Добавляем элемент множества  A в массив С

                    } else
                        break;
                }
            }

            for (auto j: arr_B) {                 // Выбираем элемент множества B.
                for (auto i: arr_A) {             // Выбираем элемент множества A.
                    if (j != i) {                 // Если элемент множества B не равен элементу множества A
                        if (i == arr_A.back())    // Если элемент множества A последний
                            arr_C.push_back(j);   // Добавляем элемент множества B в массив С

                    } else
                        break;
                }
            }

            // результат симметрической разности.
            cout << endl << "Симметрическая разность = {";
            for (auto x: arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";
            break;
        }
        case 6:{
            // Eсли пользователь выбирает операцию дополнения
            //Создается пустое множество C.
            vector<int> arr_C;
            arr_C.reserve(N_A);

            for (auto i : uni) {                    // Выбираем элемент множества U
                for (auto j : arr_A) {              // Выбираем элемент из A.
                    if (i != j) {                   // Если элемент множества А не равен эл из uni
                        if (j == arr_A.back())      // Если элемент мн A - последний эл
                            arr_C.push_back(i);     // то добавляем элемент множества uni в массив С

                    } else
                        break;
                }
            }

            // результат дополнения множества A
            std::sort(arr_C.begin(), arr_C.end());
            cout << endl << "Множество A^ = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 7:{
            // Eсли пользователь выбирает операцию дополнения
            //Создается пустое множество C.
            vector<int> arr_C;
            arr_C.reserve(N_B);

            for (auto i : uni) {                    // Выбираем элемент множества U
                for (auto j : arr_B) {              // Выбираем элемент из B.
                    if (i != j) {                   // Если элемент множества А не равен эл из uni
                        if (j == arr_B.back())      // Если элемент мн B - последний эл
                            arr_C.push_back(i);     // то добавляем элемент множества B в массив С
                    } else
                        break;
                }
            }

            // результат дополнения множества A
            std::sort(arr_C.begin(), arr_C.end());
            cout << endl << "Множество B^ = {";
            for (auto x : arr_C) {
                if (x == arr_C.back())
                    cout << x;
                else
                    cout << x << ", ";
            }
            cout << "}";

            break;
        }
        case 8:{
            //Создается пустое множество C
            vector<int> arr_C;

            for(auto i: arr_A){          //Выбираем первый элемент множества A
                for(auto j: arr_B){      //Выбираем первый элемент множества B
                    arr_C.push_back(i);  //Записываем выбранный элемент A и выбранный элемент B в кортеж, который записываем в C
                    arr_C.push_back(j);
                }
            }
            cout<<"Декартово произведение A x B = ";
            //C-результат декартового произведения множеств A и B
            int x = 0;
            cout<< "{";
            while(x < N_A*N_B) {
                if (x%10 == 0)
                    cout << endl;
                if(x == N_A*N_B - 1){
                    cout << "<" << arr_C[x] << "," << arr_C[x+1] << ">" << endl;
                }
                else{
                    cout<<"<"<< arr_C[x] << ","<<arr_C[x+1]<<">"<< ", ";
                }
                x+=2;
            }
            cout << "}";
            break;
        }
        case 9:{
            //Создается пустое множество C
            vector<int> arr_C;

            for(auto i: arr_B){             //Выбираем первый элемент множества B
                for(auto j: arr_A){         //Выбираем первый элемент множества A
                    arr_C.push_back(i);     //Записываем выбранный элемент B и выбранный элемент A в кортеж, который записываем в C
                    arr_C.push_back(j);
                }
            }
            cout<<"Декартово произведение B x A = ";
            //C-результат декартового произведения множеств A и B
            int x = 0;
            cout<< "{";
            while(x < N_A*N_B) {
                if (x%10 == 0 )
                    cout << endl;
                if(x == N_A*N_B - 1){
                    cout << "<" << arr_C[x] << "," << arr_C[x+1] << ">" << endl;
                }
                else{
                    cout<<"<"<< arr_C[x] << ","<<arr_C[x+1]<<">"<< ", ";
                }
                x+=2;
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