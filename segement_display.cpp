#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

unordered_map<int, vector<char>> alp = {
    {92229, {'A', 'D'}}, {93339, {'B'}}, {92222, {'C', 'F'}}, {93333, {'E'}}, {92336, {'G'}},
    {91119, {'H', 'N', 'U'}}, {22322, {'I'}}, {62229, {'J'}}, {92226, {'K'}}, {91111, {'L'}},
    {91519, {'M', 'W'}}, {72227, {'O'}}, {92225, {'P'}}, {92339, {'Q'}}, {93336, {'R'}},
    {63336, {'S'}}, {11911, {'T'}}, {71117, {'V'}}, {22122, {'X'}}, {62226, {'Y'}}, {23332, {'Z'}}
};

char checkChr(int s, const vector<string>& led) {
    string valStr = "";
    for (int i = 0; i < 5; i++) {
        int t = 0;
        for (int j = 0; j < 9; j++) {
            t += led[j][s + i] - '0'; // Convert char to int
        }
        valStr += to_string(t);
    }
    int val = stoi(valStr);
    if (val == 91519) {
        return (led[0].substr(s, 5) == "11111") ? 'M' : 'W';
    } else if (val == 91119) {
        if (led[8].substr(s, 5) == "11111") return 'U';
        if (led[4].substr(s, 5) == "11111") return 'H';
        return 'N';
    } else if (val == 92222) {
        return (led[4].substr(s, 5) == "11111") ? 'F' : 'C';
    } else if (val == 92229) {
        return (led[8].substr(s, 5) == "11111") ? 'D' : 'A';
    } else {
        return alp[val][0];
    }       
}

string solve(const vector<string>& led) {
    int tb = led[0].size();
    string merged = led[0];
    for (int i = 1; i < 9; i++) {
        for (int j = 0; j < tb; j++) {
            merged[j] = (merged[j] - '0' | led[i][j] - '0') + '0'; // Perform OR operation and convert back to char
        }
    }

    string result = "";
    int s = 0;
    while (s < tb) {
        if (merged[s] == '1') {
            result += checkChr(s, led);
            s += 5; // Skip 5 positions
        } else {
            s++;
        }
    }
    return result;
}

int main() {
    int t = 9;
    vector<string> led(t);
    for (int i = 0; i < t; i++) {
        cin >> led[i];
    }
    cout << solve(led) << endl;
    return 0;
}
