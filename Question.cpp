#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        // If the needle is empty, return 0
        if (needle.empty()) {
            return 0;
        }

        // If haystack is shorter than needle, needle can't fit into haystack
        if (haystack.length() < needle.length()) {
            return -1;
        }

        // Iterate through the haystack
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            bool found = true;

            // Compare characters in the needle with characters in the haystack
            for (int j = 0; j < needle.length(); ++j) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }

            // If the entire needle matches the current substring in haystack, return the index
            if (found) {
                return i;
            }
        }

        // Needle not found in haystack, return -1
        return -1;
    }
};


int main() {
    Solution solution;
    string haystack = "leetcode";
    string needle = "leeto";

    int index = solution.strStr(haystack, needle);

    if (index != -1) {
        cout << "Needle found at index: " << index << endl;
    }
    else {
        cout << "Needle not found in haystack." << endl;
    }

    return 0;
}
