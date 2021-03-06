//
// Created by Глеб on 30.04.22.
//

#include "Match.h"

Match getMatchUni() {
    // заполнение универсума
    Match uni;
    uni.X = getSetUni();
    uni.Y = getSetUni();
    uni.G = getGraphicUni();
    return uni;
}

void fulling_match(Match &set) {
    fulling_set(set.X, 'X');
    fulling_set(set.Y, 'Y');
    fulling_graphic(set.G, 'G');
}

Match cross(Match A, Match B) {
    Match C;
    C.X = cross(A.X,B.X);
    C.Y = cross(A.Y,B.Y);
    C.G = cross(A.G,B.G);
    return C;
}

Match unite(Match A, Match B) {
    Match C;
    C.X = unite(A.X,B.X);
    C.Y = unite(A.Y,B.Y);
    C.G = unite(A.G,B.G);
    return C;
}

Match difference(Match A, Match B) {
    Match C;
    C.X = difference(A.X,B.X);
    C.Y = difference(A.Y,B.Y);
    C.G = difference(A.G,B.G);
    return C;
}

Match sim_difference(Match A, Match B) {
    Match C;
    C.X = sim_difference(A.X,B.X);
    C.Y = sim_difference(A.Y,B.Y);
    C.G = sim_difference(A.G,B.G);
    return C;
}

Match addition(Match A) {
    Match C;
    C.X = A.X;
    C.Y = A.Y;
    vector<pair<int,int>> uni;
    uni = decart(A.X, A.Y);
    C.G = addition(A.G,uni);
    return C;
}

Match inversion(Match set) {
    Match C;
    vector<int> temp;
    C.X = set.Y;
    C.Y = set.X;
    C.G = inversion(set.G);
    return C;
}

Match composition(Match A, Match B) {
    Match C;
    C.X = A.X;
    C.Y = B.Y;
    C.G = composition(A.G,B.G);
    return C;
}

Match narrowing(Match set) {
    Match C;

    vector<int> T1;
    vector<int> T2;
    vector<pair<int,int>> TT;

    cout << endl;

    cout << "Заполните новую область отправления";
    fulling_set(T1); cout << endl;
    cout << "Заполните новую область прибытия";
    fulling_set(T2);

    TT = decart(T1,T2);

    C.X = T1;
    C.Y = T2;
    C.G = cross(set.G, TT);
    return C;
}


Match ToBeContinued(Match set) {
    Match C;

    vector<pair<int,int>> H;

    cout << endl;

    cout << "Заполните новый график";
    fulling_graphic(H); cout << endl;


    H = unite(H,set.G);

    C.X = set.X;
    C.Y = set.Y;
    C.G = H;
    return C;
}

vector<int> image(Match set) {
    vector<int> M;
    vector<int> AM;

    cout << endl;

    cout << "Заполните множество M";
    fulling_set(M); cout << endl;

    for (auto i : set.G) {
        for (auto &j : M) {
            if (i.first == j) {
                AM.push_back(i.second);
            }
        }
    }
    return AM;
}

vector<int> preimage(Match set) {
    vector<int> M;
    vector<int> AM;

    cout << endl;

    cout << "Заполните множество N";
    fulling_set(M); cout << endl;

    for (auto i : set.G) {
        for (auto &j : M) {
            if (i.second == j) {
                AM.push_back(i.first);
            }
        }
    }
    return AM;
}


void print(Match set) {
    cout << "X="; print(set.X); cout << endl;
    cout << "Y="; print(set.Y); cout << endl;
    cout << "G="; print(set.G); cout << endl;
}
