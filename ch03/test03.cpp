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
    double first_num;
    double second_num;

    cout << "Type first number: \n";
    cin >> first_num;
    cout << "Type second number: \n";
    cin >> second_num;

    cout << "The result is " << first_num / second_num << "\n";
}

