#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, a;
    string str;
    cout << "Enter total Student : ";
    cin >> n;

    map<string, double> mp;

    cout << "Enter student name & grade : \n";
    for(int i = 0; i<n; ++i) {
        cin >> str >> a;
        mp[str] = a;
    }

    string query;
    cout << "\nEnter student name for search : ";
    cin >> query;

    if(mp[query]) {
        if(mp[query] >= 80.0)
            cout << "A+" <<endl;
        else
            cout << "NOT A+" <<endl;
    }
    else {
        cout<< "NO STUDENT RECORD AVAILABLE" <<endl;
    }
    return 0;

}
