#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue <string> q;
    q.push("ABC");
    q.push("CDE");
    q.push("EFG");
    q.push("GHE");

    cout << q.front()<<endl;        //returns a reference to the first element of the queue
    cout << q.back()<<endl;

    q.pop();
    cout << q.front()<<endl;

    cout <<endl;
    while(!q.empty()){
        string x;
        x= q.front();
        cout << x <<endl;
        q.pop();
    }

  return 0;
}
