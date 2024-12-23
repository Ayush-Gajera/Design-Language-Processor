#include<bits/stdc++.h>
using namespace std;

void valid(string st)
{

     if((int)st[0]>=97  && (int)st[0]<=122){
        cout << "Valid";

    }
    else{
            cout<<st[0]<<endl;

    cout<<"Invalid"<<endl;}



}
int main(){
string st;
cout<<"enter string"<<endl;
cin>>st;
valid(st);
}
