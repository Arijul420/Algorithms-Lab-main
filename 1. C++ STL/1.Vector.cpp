#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec;
    vec.push_back(23);    //vec[0] = 23
    vec.push_back(20);
    vec.push_back(11);

    cout << vec[0]<<endl;
    cout << vec.at(1);

    cout << "\nSize : " << vec.size();          // Returns the number of elements in the vector.
    cout << "\nMax_Size : " << vec.max_size();
    cout << "\nEmpty : " << vec.empty();
    cout <<"\n";

    for(int i=0; i < vec.size(); i++)
        cout <<vec[i]<<endl;


    vector <int> vec2(5,2);     // fill the array with 2 five times

    for(int i=0; i < vec2.size(); i++)
        cout <<vec2[i]<<endl;

    vec2.push_back(3);



  return 0;
}
