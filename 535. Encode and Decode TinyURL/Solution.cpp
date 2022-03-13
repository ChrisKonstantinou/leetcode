#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> linkDB;
int id = 0;
string prefix = "https://tinyurl.com/";

class Solution
{
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        if (linkDB.find(longUrl) != linkDB.end()) return prefix + to_string(linkDB[longUrl]);
        linkDB.insert(pair<string, int>(longUrl, ++id));
        return prefix + (to_string(id));
    }
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        int retreived_id = stoi(shortUrl.erase(0, prefix.length()));
        for (auto &it : linkDB)
        {
            if (it.second == retreived_id) return it.first;
        }
        return "Not a valid url";
    }
};

int main () 
{

    Solution solution;
    string encodedUrl = solution.encode("http://www.longurl.com/stuff");
    string decodedUrl = solution.decode(encodedUrl);
    
    cout << encodedUrl << endl;
    cout << decodedUrl << endl;

}