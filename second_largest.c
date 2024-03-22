// time = o(n)
#include <iostream>
#include <string>
#include <cstring>
const int s = 15;
using namespace std;
int main(){
    int arr[s] = {12,342,543,3,53,2,45,632,53,232,2,4,3,2,8};
    int max=0, max2= 0;
    int idx = 0, idx2 = 0;
    for (int i = 0 ; i < s; i++){
        if (arr[i] > max){
            max2 = max ; // setting the previous largest as the second largest
            idx2 = idx;
            max = arr[i];
            idx = i;
        }
    }
    cout << "The second largest number : " << max2 << endl;
    cout << "The index:  "<< idx2 << endl; 
    
}
