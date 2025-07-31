//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main() {
    int n,ele,flag = 0;
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
   
    cout<<"Enter element to Search: ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(marks[i] == ele){
            flag = 1;
            cout << "Found, it's Location is " << i+1 << endl;
            c++;
    }
    if(i == n-1){
            cout<<"Element occurs " << c <<" times"<<endl;
    }
    }
    if(flag != 1){
        cout << "Element not Found";
        }
        return 0;
}
/*
output:
Enter Number of elements:5
Enter marks 1: 98
Enter marks 2: 98
Enter marks 3: 97
Enter marks 4: 96
Enter marks 5: 95
marks: 98 98 97 96 95 
Enter element to Search: 98
Found, it's Location is 1
Found, it's Location is 2
Element occurs 2 times
*/