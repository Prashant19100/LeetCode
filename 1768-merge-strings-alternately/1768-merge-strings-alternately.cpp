class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int len1 = word1.length();
        int len2 = word2.length();
        int i = 0, j = 0;

        // Loop through both strings and add characters alternately
        while (i < len1 && j < len2) {
            result += word1[i++];
            result += word2[j++];
        }

        // If there are remaining characters in word1
        while (i < len1) {
            result += word1[i++];
        }

        // If there are remaining characters in word2
        while (j < len2) {
            result += word2[j++];
        }

        return result;
    }
};