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

int add(int x, int y);

int main() {
    int result = add(1, 2);
    cout << "The result is: " << result << endl;
    cout << "Adding 3 and 4 gives us: " << add(3, 4);
}

int add(int x, int y) {
    return x + y;
}
