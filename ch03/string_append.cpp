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
    string user_first_name;
    string user_last_name;

    cout << "Plz enter ur first name: ";
    cin >> user_first_name;
    cout << "Plz enter ur last name: ";
    cin >> user_last_name;

    string user_full_name = user_first_name + " " + user_last_name;

    cout << "Ur name is " << user_full_name << "...\n";
}
