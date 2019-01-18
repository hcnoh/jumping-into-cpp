#include <iostream>

using namespace std;

void typeNameAndSex(string *p_name, string *p_sex) {
    cout << "Type your name: ";
    cin >> *p_name;
    cout << endl;
    cout << "Type your sexual type: ";
    cin >> *p_sex;
    cout << endl;
};

void typeNameAndSexWithRef(string &ref_name, string &ref_sex) {
    cout << "Type your name: ";
    cin >> ref_name;
    cout << endl;
    cout << "Type your sexual type: ";
    cin >> ref_sex;
    cout << endl;
};

int main() {
    string name, sex;

    string *p_name = &name, *p_sex = &sex; // NULL로 초기화하면 segmentation fault가 일어남...
    typeNameAndSex(p_name, p_sex);
    cout << *p_name << ", " << *p_sex << endl;

    string &ref_name = name, &ref_sex = sex;
    typeNameAndSexWithRef(ref_name, ref_sex);
    cout << ref_name << ", " << ref_sex << endl;
};

