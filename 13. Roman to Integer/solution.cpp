#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int roman_to_int = 0;
        int length = s.length();
        vector<int> translations(length);

        map<char, int> roman_dict =
        {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 }
        };

        for (int i = 0; i < length - 1; i++)
        {
            if (roman_dict[s[i + 1]] > roman_dict[s[i]]) translations[i] = -roman_dict[s[i]];
            else translations[i] = roman_dict[s[i]];
            roman_to_int += translations[i];
        }
        translations[length - 1] = roman_dict[s[length - 1]];
        roman_to_int += translations[length - 1];
        
        return roman_to_int;
    }
};



int main () 
{
    Solution solution;
    cout << solution.romanToInt("MCMXCIV") << endl;
}