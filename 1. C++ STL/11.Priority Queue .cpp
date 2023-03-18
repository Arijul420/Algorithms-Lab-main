#include <iostream>
#include <queue>
using namespace std;

// first element of the queue is the greatest of all elements in the queue and elements are in non increasing order
int main() {

    priority_queue <string> q;
    q.push("ABC");
    q.push("CDE");
    q.push("EFG");
    q.push("GHE");

    cout << q.top()<<endl;        //returns a reference to the first element of the queue

    q.pop();

    cout <<endl;
    while(!q.empty()){
        string x;
        x= q.top();
        cout << x <<endl;
        q.pop();
    }

  return 0;
}
