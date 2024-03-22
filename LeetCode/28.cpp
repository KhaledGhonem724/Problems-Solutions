// 28. Find the Index of the First Occurrence in a String.cpp
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution {
public:
  int strStr(string haystack, string needle) {
      if (needle.size()> haystack.size()) return -1;
      for (int i = 0; i <= haystack.size() - needle.size() ; i++)
      {
          if (haystack[i] == needle[0])
          {
              if (haystack.substr(i, needle.size()) == needle)
              {
                  return i;
              }
          }
      }
      return -1;
  }
};
