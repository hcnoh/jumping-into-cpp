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
    int first_user_age;
    int second_user_age;

    cout << "Type first user age: \n";
    cin >> first_user_age;

    cout << "Type second user age: \n";
    cin >> second_user_age;

    if ((first_user_age > 100) && (second_user_age > 100)) {
        cout << "Dont need to compare them...\n";
        return 0;
    }
    else if (first_user_age > second_user_age) {
        cout << "The first user is older than the second user...\n";
    }
    else if (second_user_age > first_user_age) {
        cout << "The second user is older than the first user...\n";
    }
    else {
        cout << "Both users have same age...";
    }
}
