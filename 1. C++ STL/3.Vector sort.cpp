#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector <int> vec;
    vec.push_back(23);
    vec.push_back(20);
    vec.push_back(11);
    vec.push_back(432);
    vec.push_back(72);

    sort(vec.begin(), vec.end());

    for(int i=0; i < vec.size(); i++)
        cout <<vec[i]<<endl;


    //Array sort
    int arr[5] =  {2, 45, 11, 8, 22};
    sort(arr, arr+3);             //sort upto first 3 element

    for(int i=0; i < 5; i++)
        cout <<arr[i]<<endl;


    vector<int> vec2{ 11, 5, 8, 9, 6, 7, 3, 4, 2};

    sort(vec2.begin(), vec2.end());

    for (auto x : vec2)
        cout << x << " ";


  return 0;
}
