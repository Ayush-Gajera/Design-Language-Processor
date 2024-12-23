#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string:";
    cin>>s;
    cout<<"set starting set:";
    int current_state;
    cin>>current_state;
    cout<<"set Acceptence test set:";
    int A_state;
    cin>>A_state;
    int tarnsition[5][2]={{0,0},{2,3},{1,4},{4,1},{3,2}};
    for(int i=0;i<s.length();i++)
    {
        int l=0;
        if(s[i]=='a')
        {
            l=0;
        }else{
        l=1;
        }
        cout<<current_state<<" "<<s[i]<<" "<<l<<"= ";
        current_state=tarnsition[current_state][l];
        cout<<current_state<<endl;
    }
    if(current_state==2)
        cout<<"valid"<<endl;
    else
        cout<<"Not valid"<<endl;
}
