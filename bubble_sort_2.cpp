
// -------------------------------- bubble sort  -----------------
// time :  O(n^2 ) , n = size of the array. 
#include <iostream>

const int s = 15;
using namespace std;
void swap(int& x , int& y );

int main(){
    int arr[s] = {12,342,543,3,53,2,45,624,53,232,2,4,3,2,8};
    for (int i = 0; i < s ; i ++){
        for (int j = 0 ; j < s-i-1 ; j ++){ // * -1 is important
            if ( arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout << "Testing ...";
        for (int i = 0; i < s; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;
    }
    
    
    for (int i = 0; i < s; i ++){
        cout << arr[i] << " ";
    }
    
}

void swap(int& x , int& y ){
    int temp;
    temp = x;
    x =y;
    y = temp;
}
