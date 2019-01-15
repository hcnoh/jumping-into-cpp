#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

int rand_range(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL));
    int min = 1;
    int max = 10;

    int ans = rand_range(min, max);
    int typed_ans;

    while (true) {
        cout << "Type a answer: " << endl;
        cin >> typed_ans;

        if (typed_ans == ans) {
            cout << "Right!" << endl;
            break;
        }
        else if (typed_ans > ans){
            cout << "Too high!" << endl;
        }
        else {
            cout << "Too low!" << endl;
        }
    }
}


