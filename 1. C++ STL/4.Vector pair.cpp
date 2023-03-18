#include <iostream>
#include<vector> // for vectors
#include<iterator> // for iterators
using namespace std;

int main() {

    vector< pair<int, string> > vec;
    vector<pair<int, string>>::iterator it;     //vector<pair<int, string>>::iterator -> iterator type

    vec.push_back(make_pair(10, "Rahim"));    //vec[0] = 23
    vec.push_back(make_pair(15, "Karim"));
    vec.push_back(make_pair(16, "Rofiq"));

    cout << vec[0].first<< "\t"<< vec[0].second <<endl;

    cout <<endl;

    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << it->first << '\t' << it->second << '\n';
    }

    return 0;
}
