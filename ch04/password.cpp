#include <string>
#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

int main() {
    string password;

    cout << "Enter ur password: \n";
    getline(cin, password);

    if (password == "xyzzy") {
        cout << "Access alowed\n";
        }
    else {
        cout << "Bad password. Denied access!\n";
        return 0;
    }
    cout << "Welcome!\n";
}
