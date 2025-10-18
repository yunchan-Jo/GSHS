#include <iostream>
#include <string>
#include <set>

using namespace std;
set<string> s;
string str;

int main(void) {
    int n; cin >> n >> str;

    int cnt = 1;
    for (int i = 0; i < str.size(); i++) {
        if (s.find(str.substr(i, 1)) == s.end()) {
            s.insert(str.substr(i, 1));

            cout << cnt++ << ":" << str.substr(i, 1) << "\n";
        }
    }

    for (int i = 0; i < str.size(); i++) {
        for (int j = 2; j <= str.size() - i; j++) {
            if (s.find(str.substr(i, j)) == s.end()) {
                s.insert(str.substr(i, j));
    
                cout << cnt++ << ":" << str.substr(i, j) << "\n"; 
                i = i + j - 2;
                break;
            }
        }
    }
}