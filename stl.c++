#include <iostream>

using namespace std;

void explainpair() {
    // Single pair
    pair<int, int> p = {1, 2};
    cout << p.first << "  " << p.second << endl;

    // Nested pair
    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << "  " << q.second.first << "  " << q.second.second << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
}
void explaivectors(){
    vector<int,int>v = {};
    v.push_back(1);
    v.emplace_back(2);
vector<pair<int,int>>vec;

v.push_back({1,2});
v.empalce_back(1,2);

vector<int> v(5,10);
vector<int> v2(v);

// iterators

vector <int> :: iterator it = v.begin();

it ++;
cout << *(it) << "";

vector<int>::iterator it =v.end();


cout<<v.at(0);
cout<<v.back();
}

void explain 


int main() {
    explainpair();
    explainvectors();
    return 0;
}
   