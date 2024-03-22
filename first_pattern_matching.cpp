
// 
// best case : no alphabet of the pattern exist in the text. (T : O(n))
// worst case : all characters of the text and pattern are the same. t = "aaaaaaaaa", p ="aaa", (T: O(nm)), n for text, m for pattern. 
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string text = "abbadedfseqaddavvabbdeseavbabba";
    string pattern = "abba";
    int pattern_length = pattern.size();
    int text_length = text.size();
    int j;
    for(int i = 0; i < (text_length-pattern_length)+1; i++ ){
        for ( j = 0 ; j < pattern_length; j++){
            if (text[i+j]!= pattern[j]){
                break; // no pattern has been found.
            }
        }
        
        if ( j == pattern_length){
            // j == pattern_lenght - 1 is wrong, j will leave from the loop after ++ operation. 
            cout << "Pattern found at the index "<< i << endl;
            break; // omit if you want to find all the pattern in the text. 
        }
        
    } 
    return 0;
}
