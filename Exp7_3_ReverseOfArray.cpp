//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main() {
    int n;
    int c=0;
    cout << "Enter Number of elements:";
    cin >> n;
    int marks[n];
    for(int i = 0;i<n;i++){
        cout << "Enter marks "<<i+1 <<": ";
        cin >> marks[i];
    }
    cout << "marks: ";
    for(int i = 0;i<n;i++){
        cout << marks[i] <<" ";
    }
    cout << endl;
    cout << "Reverse marks: ";
    for(int i = n-1;i>=0;i--){
        cout << marks[i] <<" ";
    }
    return 0;
}
/*
output:
Enter Number of elements:5
Enter marks 1: 90
Enter marks 2: 91
Enter marks 3: 92
Enter marks 4: 93
Enter marks 5: 94
marks: 90 91 92 93 94 
Reverse marks: 94 93 92 91 90
*/