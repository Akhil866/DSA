#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool f(const vector<vector<int>>& a1, const vector<vector<int>>& a2) {
    int d = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a1[i][j] != a2[i][j]) {
                if (++d > 1) return false;
            }
        }
    }
    return true;
}

void solve() {
    vector<vector<int>> n(3, vector<int>(30));
    for (int i = 0; i < 3; i++) {
        string r;
        cin >> r;
        for (int j = 0; j < 30; j++) {
            n[i][j] = r[j] - '0';
        }
    }

    map<vector<vector<int>>, int> mp;
    for (int ch = 0; ch < 30; ch += 3) {
        vector<vector<int>> v(3, vector<int>(3));
        for (int i = 0; i < 3; i++) {
            for (int j = ch; j < ch + 3; j++) {
                v[i][j - ch] = n[i][j];
            }
        }
        mp[v] = ch / 3;
    }

    vector<string> in(3);
    int sz = 0;
    for (int i = 0; i < 3; i++) {
        cin >> in[i];
        sz = in[i].size();
    }

    vector<vector<int>> t(3, vector<int>(sz));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < sz; j++) {  
            t[i][j] = in[i][j] - '0';
        }
    }

    map<int, vector<int>> s;
    for (int ch = 0; ch < sz; ch += 3) {
        vector<vector<int>> d(3, vector<int>(3));
        for (int i = 0; i < 3; i++) {
            for (int j = ch; j < ch + 3; j++) {
                d[i][j - ch] = t[i][j];
            }
        }

        vector<int> vd;
        for (const auto& it : mp) {
            if (f(it.first, d)) {
                vd.push_back(it.second);
            }
        }

        s[ch / 3] = vd;
    }

    for (const auto& it : s) {
        if (it.second.empty()) {
            cout << "0\n";
            return;
        }
    }

    vector<ll> r = {0};
for (std::size_t p = 0; p < s.size(); ++p) { 
    vector<ll> nr;
    for (int d : s[p]) {
        for (const ll& num : r) {
            nr.push_back(num * 10 + d);
        }
    }
    r = move(nr);
}


    ll sum = 0;
    for (const ll& num : r) {
        sum += num;
    }
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
