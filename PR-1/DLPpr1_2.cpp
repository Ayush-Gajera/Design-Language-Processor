#include<bits/stdc++.h>
using namespace std;

void valid(string st)
{ int i=st.length()-1;

    if(st[0]==st[i])
    {
        cout<<"valid"<<endl;
    }else{
    cout<<"Invalid"<<endl;
    }


}
int main(){
string st;
cout<<"enter string"<<endl;
cin>>st;
valid(st);
}
