#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
map<string, int> m;
string str;
vector<int> v;

int main(void) {
    int n; cin >> n >> str;

    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (m.find(str.substr(i, 1)) == m.end()) {
            m.insert(make_pair(str.substr(i, 1), ++cnt));
        }
    }

    for (int i = 0; i < str.size(); i++) {
        string s; int t = str.size();
        for (int j = 1; j <= str.size() - i; j++) {
            if (m.find(str.substr(i, j)) == m.end()) {
                m.insert(make_pair(str.substr(i, j), ++cnt));

                t = i + j - 2; break;
            }
            else s = str.substr(i, j);
        }

        v.push_back(m.find(s)->second);
        i = t;
    }

    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}