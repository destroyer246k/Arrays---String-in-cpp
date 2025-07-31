//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main() {
    int n;
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
    return 0;
}
/*
output:
Enter Number of elements:5
Enter marks 1: 99
Enter marks 2: 98
Enter marks 3: 97
Enter marks 4: 96
Enter marks 5: 98
marks: 99 98 97 96 98 
*/