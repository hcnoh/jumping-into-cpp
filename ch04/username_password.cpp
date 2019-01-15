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
    string user_name;
    string password;

    cout << "Enter ur user name: \n";
    getline(cin, user_name);

    cout << "Enter ur password: \n";
    getline(cin, password);

    if (user_name == "root" && password == "xyzzy") {
        cout << "Access allowed!\n";
    }
    else {
        cout << "Bad username or password. Denied access!\n";
        return 0;
    }

    cout << "Welcome!\n";
}
