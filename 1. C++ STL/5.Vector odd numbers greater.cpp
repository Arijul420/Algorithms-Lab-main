#include <stdio.h>
#include <vector>
using namespace std;

// find out if summation of all odd no in vector is greater than summation of all even no

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int a; scanf("%d", &a); v.push_back(a);
    }

    int odd = 0, even = 0;
    for(int i = 0; i < n; ++i) {
        odd += (v[i] % 2 == 0) ? 0 : v[i];
        even += (v[i] % 2 == 0) ? v[i] : 0;
    }

    if(odd > even)
        printf("YES \n");
    else
        printf("NO \n");
}
