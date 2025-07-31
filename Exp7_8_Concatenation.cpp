//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    string str3;
    string str4;
    string fullName;
    cout << "Enter First Name: ";
    cin >> str1;
    cout << "Enter Last Name: ";
    cin >> str2;
    cout << "Enter College Name: ";
    cin >> str3;
    cout << "Enter Course Name: ";
    cin >> str4;
    cout << endl;
    fullName = str1 + " "+str2;
    cout << "Full Name: " << fullName<< endl;
    cout << "College Name: " << str3 << endl;
    cout << "Course Name: " << str4 << endl;
    return 0;
}
/*
Output:
Enter First Name: Vishwas
Enter Last Name: Patel
Enter College Name: SIT
Enter Course Name: E&TC

Full Name: Vishwas Patel
College Name: SIT
Course Name: E&TC
*/