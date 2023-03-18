#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack <string> s;
    s.push("ABC");
    s.push("CDE");
    s.push("EFG");
    s.push("GHE");

    cout << s.top()<<endl;

    s.pop();
    cout << s.top()<<endl;

    cout <<endl;
    while(!s.empty()){
        string x;
        x= s.top();
        cout << x <<endl;
        s.pop();
    }

  return 0;
}
