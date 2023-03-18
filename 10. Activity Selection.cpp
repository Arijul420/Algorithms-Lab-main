#include <iostream>

using namespace std;

class activity
{
public:
    string name[11]={"1","2","3","4","5","6","7","8","9","10","11"};//name of each activity

    int s[11]={1,3,0,5,3,5,6,8,8,2,12};//start time of each activity
    int f[11]={4,5,6,7,9,9,10,11,12,14,16};//end time of each activity
    //int n=sizeof(s)/sizeof(s[0]);
    void print()
    {
        int i,j;
        cout<<"\nThe following activities are selected:";
        cout<<"\nACTIVITY NO\tSTART\tEND\tACTIVITY NAME";
        i=0;
        cout<<"\n\t"<<i+1<<"\t"<<s[i]<<".00"<<"\t"<<f[i]<<".00"<<"\t"<<name[i];
        for(j=1;j<11;j++)
        {
            if(s[j]>=f[i])
            {
                cout<<"\n\t"<<j+1<<"\t"<<s[j]<<".00"<<"\t"<<f[j]<<".00"<<"\t"<<name[j];
                i=j;
            }
        }
    }
};
int main()
{
    activity a;
    a.print();
    return 0;
}
