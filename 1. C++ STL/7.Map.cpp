#include <iostream>
#include <map>
using namespace std;

// Maps are associative containers that store elements in a mapped fashion
int main() {

    map <string, int> mymap;

    //      key     value
    mymap["Rahim"] = 10;
    mymap["Karim"] = 15;
    mymap["Nahid"] = 20;

    mymap.insert(make_pair("Rofiq", 40));   //another way

    printf("%d\n", mymap["Rahim"]);

    map <string, int>::iterator it;
    it = mymap.begin();

    cout << it->first <<endl;
    cout << it->second <<endl;

    for (it = mymap.begin(); it != mymap.end(); ++it) {
        cout << it->first << '\t' << it->second << '\n';
    }


    return 0;
}
