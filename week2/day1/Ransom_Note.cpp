class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Array to store frequency count of each letter (a-z)
        // Index 0 represents 'a', index 1 represents 'b', and so on
        int letterCount[26] = {0};
      
        // Count the frequency of each character in the magazine
        for (char& ch : magazine) {
            letterCount[ch - 'a']++;
        }
      
        // Check if ransom note can be constructed from magazine letters
        for (char& ch : ransomNote) {
            // Decrement the count for current character
            // If count becomes negative, magazine doesn't have enough of this letter
            if (--letterCount[ch - 'a'] < 0) {
                return false;
            }
        }
      
        // All characters in ransom note can be constructed from magazine
        return true;
    }
};