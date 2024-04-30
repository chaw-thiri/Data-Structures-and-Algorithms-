#include <iostream>
using namespace std;
const int SIZE = 10;

void printArr(int size, int* arr);
int find_smallest(int cur, int end, int* arr);
int main() {
    int arr[SIZE ] = {10,9,8,7,6,5,4,3,2,1};
    int cur= 0, smallestIdx;
    cout << "Before sorting ...." << endl;
    printArr(SIZE, arr);
    while (cur <SIZE-1){
        smallestIdx = find_smallest(cur, SIZE, arr);
        if ( smallestIdx != cur){
            swap(arr[cur], arr[smallestIdx]);
            cout << arr[smallestIdx] << " and " << arr[cur] << " swapped\n";
            printArr(SIZE,arr);
        }
        cur++;
    }
    
    // finding the smallest
    
    cout << "After sorting ..." << endl;
    printArr(SIZE, arr);

    return 0;
}
int find_smallest(int cur, int end, int* arr){
    int smallest = arr[cur];
    int smallIdx= cur;
    for (int i = cur+1 ; i < end ; i++){
        if (arr[i] < smallest ){
            smallest = arr[i];
            smallIdx = i;
            
        }
    }
    return smallIdx;
}


void printArr(int size, int* arr){
    for (int i = 0; i < size; i ++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
