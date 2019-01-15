#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

int randRange(int low, int high) {
    return rand() % (high - low + 1) + low;
}

int main() {
    srand(time(NULL));
    for (int i=0; i<1000; ++i) {
        cout << randRange(4, 10) << endl;
    }
}

