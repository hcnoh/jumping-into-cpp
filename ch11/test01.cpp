#include <iostream>
#include <string>

using namespace std;

struct UserInfo {
    string name;
    string addr;
    string phone;
};

void displayUserInfo(UserInfo user);

void displayUserInfo(UserInfo user) {
    cout << "User name: " << user.name << endl;
    cout << "User address: " << user.addr << endl;
    cout << "User phone number: " << user.phone << endl;
};

int main() {
    UserInfo user;

    cout << "Type ur name: " << endl;
    getline(cin, user.name);
    cout << "Type ur address: " << endl;
    getline(cin, user.addr);
    cout << "Type ur phone number: " << endl;
    getline(cin, user.phone);

    displayUserInfo(user);
};
