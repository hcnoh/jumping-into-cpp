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

int main() {
    int true_password = 12345;
    int password;

    cout << "Type a passworkd: \n";
    cin >> password;

    if (password != true_password) {
        cout << "Access denied...\n";
        return 0;
    }

    cout << "Welcome!\n";
}

