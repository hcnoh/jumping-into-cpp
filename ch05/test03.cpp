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
    int sum = 0;
    int typed_num;

    do {
        cout << "Type a number: \n";
        cin >> typed_num;
        sum += typed_num;
    } while (typed_num != 0);

    cout << "The sum is " << sum << endl;
}

