#include <iostream>

using namespace std;

void typeNameAndSex(string *p_first_name, string *p_second_name, string *p_sex) {
    cout << "Type your first name: ";
    cin >> *p_first_name;
    cout << endl;
    if (p_sex == NULL) {
        cout << "Type your second name: ";
        cin >> *p_second_name;
        cout << endl;
    }
    else {
        *p_second_name = "Unknown";
    };
    cout << "Type your sexual type: ";
    cin >> *p_sex;
    cout << endl;
};

void typeNameAndSexWithRef(string &ref_first_name, string &ref_second_name, string &ref_sex) {
    cout << "Type your first name: ";
    cin >> ref_first_name;
    cout << endl;
    cout << "Type your second name: ";
    cin >> ref_second_name;
    cout << endl;
    cout << "Type your sexual type: ";
    cin >> ref_sex;
    cout << endl;
};

int main() {
    string first_name, second_name, sex;

    string *p_first_name = &first_name, *p_second_name = &second_name, *p_sex = &sex;
    typeNameAndSex(p_first_name, p_second_name, p_sex);
    cout << *p_first_name << ", " << *p_second_name << ", " << *p_sex << endl;

    string &ref_first_name = first_name, &ref_second_name = second_name, &ref_sex = sex;
    typeNameAndSexWithRef(ref_first_name, ref_second_name, ref_sex);
    cout << ref_first_name << ", " << ref_second_name << ", " << ref_sex << endl;
};

