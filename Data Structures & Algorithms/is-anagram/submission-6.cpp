class Solution {
public:
    bool isAnagram(string s, string t) {
        // Bước 1: khác độ dài → không thể là anagram
        if (s.length() != t.length()) {
            return false;
        }

        // Bước 2: sắp xếp cả 2 chuỗi
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Bước 3: so sánh
        return s == t;
    }
};