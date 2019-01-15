#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

void playgame() {}

void loadgame() {}

void playmultiplayer() {}

int main() {
    int input;

    cout << "1. Play game." << endl;
    cout << "2. Load game." << endl;
    cout << "3. Play multiplayer." << endl;
    cout << "4. Exit." << endl;
    cout << "Selection: ";
    cin >> input;

    switch (input) {
        case 1:
            playgame();
            break;
        case 2:
            loadgame();
            break;
        case 3:
            playmultiplayer();
            break;
        case 4:
            cout << "Thank you for playing!" << endl;
            break;
        default:
            cout << "Error, bad input, quitting..." << endl;
            break;
    }
}
