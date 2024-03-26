// best case : O(1) : first index, worst case O(n) : last index
#include <iostream>
using namespace std;
int main() {
    int arr[10]= {3,3,5,74,4,7,5,3,2};
    int target;
    cout << "Enter the number you want to find : ";
    cin >> target;
    for (int i = 0 ; i < 10 ; ++i){
        if (arr[i] == target){
            cout << target << " is found at the index " <<i<<endl; 
            return 0;
        }
        
    }
    cout << target << " does not exist in the array. "<<endl;
    return 0;
}
