#include <iostream>
#include<vector> // for vectors
#include<iterator> // for iterators
using namespace std;

//Iterators are used to point at the memory addresses
int main() {

    vector<int> vec;
    vector<int>::iterator ptr;     //vector<int>::iterator -> iterator type

    vector<double> vec2;
    vector<double>::iterator ptr2;

    for (int i = 1; i <= 5; i++)
        vec.push_back(i);

    for (int i = 0; i != vec.size(); ++i)
        cout << vec[i] << "\t";

    cout<<endl;

    ptr = vec.begin();
    cout << *ptr <<endl;

    // Displaying vector elements using iterator
    for (ptr = vec.begin(); ptr !=vec.end(); ptr++){
        cout << *ptr << " ";
    }



  return 0;
}
