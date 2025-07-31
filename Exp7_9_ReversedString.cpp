//Patel Vishwas
//24070123072
//A3
#include<iostream>
#include <string>
using namespace std;
int main(){
    char c;
   string str1 ;
   string str2;
    cout << "Enter first string: ";
    cin >> str1;
    for(int i = str1.length(); i >=0 ; i--) {
        str2 += str1[i];      
}
cout << "Reversed string: " << str2 << endl;
    
return 0;
}
/*
Output:
Enter first string: Hello
Reversed string: olleH
*/