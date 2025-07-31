//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main() {
    int n,avg,Sum=0;
    cout << "Enter Number of elements:";
    cin >> n;
    int marks[n];
    for(int i = 0;i<n;i++){
        cout << "Enter marks "<<i+1 <<": ";
        cin >> marks[i];
    }
    cout << "SUM: ";
    for(int i = 0;i<n;i++){
        Sum = Sum + marks[i];
    }
    avg = Sum/n;
    cout << Sum << endl;
    cout << "Average: "<< avg << endl;
    return 0;
}
/*
output:
Enter Number of elements:5
Enter marks 1: 10
Enter marks 2: 20
Enter marks 3: 30
Enter marks 4: 40
Enter marks 5: 50
SUM: 150
Average: 30
*/