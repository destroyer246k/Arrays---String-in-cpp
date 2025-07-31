//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
int main(){
    int j;
    string str1;
    cout << "Enter first string: ";
    cin >> str1;
    for(int i = str1.length() - 1,j=0; i >= 0; i--,j++) {
        if(str1[i]==str1[j]) {
            cout << "Palindrome" << endl;
            return 0;
        }
        else {
            cout << "Not a Palindrome" << endl;
            return 0;
        }
    }
}
/*
Output:
Enter first string: madam
Palindrome
Enter first string: hello
Not a Palindrome
*/