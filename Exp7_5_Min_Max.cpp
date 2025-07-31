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
        cout << "Enter Marks" << i+1 << ": ";
        cin>>marks[i];
    }
    int max = marks[0];
    int min = marks[0];
    for(int i = 0;i<n;i++){
        if(marks[i] > max){
            max = marks[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(marks[i] < min){
            min = marks[i];
        }
    }
    cout << "MAX: "<<max<<endl;
    cout<<"MIN: "<<min<<endl;
}
/*
Output:
Enter Marks1: 90
Enter Marks2: 91
Enter Marks3: 92
Enter Marks4: 93
Enter Marks5: 94
MAX: 94
MIN: 90
*/