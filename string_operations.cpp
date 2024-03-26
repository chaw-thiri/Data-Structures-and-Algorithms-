#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<size_t> find_pos(string text, string pattern);
void replacement(string text, string pattern, string substitute);

int main() {
	string S = "WE THE PEOPLE";
	string T = "OF THE UNITED STATES";
	cout << "S : " << S;
	cout << "\nT: " << T << endl << endl;
// -----------------------------------3.5 FIND THE LENGTH OF S & T --------------------------
	cout << "3.5 Length of S & T      " << endl;
	cout << "S length: " << S.length()<<endl;
	cout << "T length: " << T.length() << endl;
//------------------------------------ 3.6 FIND SUBSTRING -----------------------------------
	cout << "\n3.6 Finding substrings " << endl;
	string substrA = S.substr( 4, 8);
	string substrB = T.substr(10, 5);
	cout << "Substring(S,4,8) : " << substrA << endl;
	cout << "Substring(T,10,5) : " << substrB << endl;

// ----------------------------------- 3.7 FIND INDEX ---------------------------------------
	cout << "\n3.7 Finding Indexes " << endl;
	cout << "Index(S,'P'): " << S.find("P") << endl;
	cout << "Index(S,'E'): " << S.find('E') << endl;
	cout << "Index(S,'THE'): " << S.find("THE") << endl;
	cout << "Index(T,'THE'): " << T.find("THE") << endl;
	cout << "Index(T,'THEN'): " << T.find("THEN") << endl; // The result means the string was not found.
	cout << "Index(T,'TE'): " << T.find("TE") << endl;
//------------------------------------- 3.8 Concat ----------------------------------------------
	cout << "\nString Concatenation " << endl;
	string A = "NO", B = "EXIT";
	cout << "NO//EXIT : " << A+B << endl;
	cout << "NO EXIT : " << A +' ' + B << endl;

	cout << "Substring(S,4,10)//' ARE '//Substring(T,8,6):  " << S.substr(4, 10) + " ARE " + T.substr(4, 10) << endl;
// ---------------------------------- 3.9 Delete -------------------------------------------------
	cout << "\nString Deletion " << endl;
	string str1 = "AAABBB";
	cout << "Delete('AAABBB', 3, 3) : " << str1.erase(3, 3)<<endl;
	str1 = "AAABBB";
	cout << "Delete('AAABBB',1,4) : " << str1.erase(1, 4) << endl;
	cout << "Delete(S,1,3) : " << S.erase(1, 3) << endl;
	cout << "Delete(T,1,7) : " << T.erase(1, 7) << endl;
// ---------------------------------- 3.10 Replace -------------------------------------------------
	S = "WE THE PEOPLE";
	T = "OF THE UNITED STATES";
	cout << "\nReplacement" << endl;
	cout << "Replace(ABABAB,B,BAB)";replacement("ABABAB", "B", "BAB");
	cout << "Replace(S,WE,ALL)"; replacement(S, "WE", "ALL");
	cout << "Replace(T,THE,THESE)"; replacement(T, "THE", "THESE");
// ---------------------------------- 3.11 Insert ---------------------------------------------
	cout << "\nInsertion " << endl;
	A = "AAA";
	cout << "Insert(AAA,2,BBB): " << A.insert(2, "BBB")<<endl;
	A = "ABCDE";
	cout << "Insert(ABCDE,3,XYZ): " << A.insert(3, "XYZ")<<endl;
	A = "THE BOY";
	cout << "Insert(THE BOY, 5,BIG ): " << A.insert(5, "BIG ")<<endl;   
// ----------------------------------- 3.12 -----------------
	cout << "\n3.12\n";
	string U = "MARC STUDIES MATHEMATICS";
	cout << U.insert(13, "ONLY ") << endl;


}

vector<size_t> find_pos(string text, string pattern) {
	vector<size_t> idxes; 
	int pattern_length = pattern.size();
	int text_length = text.size();
	int j;
	for (int i = 0; i < (text_length - pattern_length) + 1; i++) {
		for (j = 0; j < pattern_length; j++) {
			if (text[i + j] != pattern[j]) {
				break; // no pattern has been found.
			}
		}

		if (j == pattern_length) {
			// j == pattern_lenght - 1 is wrong, j will leave from the loop after ++ operation. 
			idxes.push_back(i);
			
		}

	}
	return idxes;
	

}
void replacement(string text, string pattern, string substitute) {
	vector<size_t> idxes = find_pos(text, pattern);
	for (int i = idxes.size() - 1; i >= 0; --i) {
		// the loop goes from the back to the front
		// going front to the back will cause the indexes to modify and the loop will not end in ABABAB for B will be continuouly replaced by BAB.
		text.replace(idxes[i], pattern.length(), substitute);
	}

	// Output the modified text
	cout << ": " << text << endl;
}
