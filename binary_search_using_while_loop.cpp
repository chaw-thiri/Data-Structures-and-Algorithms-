// ----------------------------------------------- Linear Search ----------------
// the array must be sorted ***
// time = O(log n ), Space O(1)
#include <iostream>
using namespace std;


const int SIZE = 20;
int main() {
    int arr[SIZE]= {5,9,12,16,19,27,35,38,40,43,55,57,62,68,75,78,81,86,94,97};
    int upper = 20 , lower = 1;
    int target, count = 0;
    cout << "Enter the number you want to find : " ;
    cin >> target;
    while (upper > 0 && lower < SIZE){
        count++;
        int mid = (upper + lower )/ 2;
        int current = mid;
        // base case
        if( arr[current] == target){
            cout << "Number of comparisons: "<< count << endl;
            cout << target << " is found at the index "<< current << endl;
            return 0;
        }
        else if (arr[current] < target){ lower = mid;}
        else if (arr[current] > target){ upper = mid;}
            
        
    }
    cout << "Target was not found."<< endl;
    
   
    
}
