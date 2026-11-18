// Leetcode 242: Valid Anagram

#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ELEVEN PLUS TWO", t = "TWELVE PLUS ONE";
    bool anagram = false;
    unordered_map<char,int> letterS, letterT;

    if (s.length() == t.length()) {
        for (int i=0; i<s.length(); i++) {
            letterS[s.at(i)]++;
            letterT[t.at(i)]++;
        }
            if (letterS==letterT) {
        cout << "Valid anagram!\n";
        }
        else {
            cout << "Invalid anagram.\n";    
        }
    }
    else {
        cout << "Invalid anagram.\n";
    }



    return 0;
}