#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> permutations(string s) {
    vector<string> V;
    if(s.size() == 1)return vector<string> {s};

    sort(s.begin(),s.end());
    do{
        V.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    return V;
}
