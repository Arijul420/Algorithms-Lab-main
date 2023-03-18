#include <iostream>
#include <list>
using namespace std;

int main() {

    list <float> lis;
    list <float>::iterator it;

    lis.push_back(23);
    lis.push_back(20);
    lis.push_back(11);


    cout << "List size : " << lis.size();          // Returns the number of elements in the vector.
    cout <<"\n";

    for(it = lis.begin(); it != lis.end(); it++)
        cout <<*it<<endl;

    cout <<"\n";

    lis.push_front(81);
    for(it = lis.begin(); it != lis.end(); it++)
        cout <<*it<<endl;

  return 0;
}
