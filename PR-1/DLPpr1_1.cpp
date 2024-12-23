
#include<bits/stdc++.h>

using namespace std;
void valid(string st)
{  int i=0;
    while(st[i]!=NULL)
    {
        if(st[i]=='0'){
            if(st[i+1]=='1'&&st[i+2]=='1')
            {
                i+=2;
            }else{
            cout<<"Invalid"<<endl;
            return ;
            }
        }
        else
        {
            i++;
        }
    }
    cout<<"valid"<<endl;
}
int main()
{
    string st;
    cout<<"enter the string"<<endl;
    cin>>st;
    valid(st);
}
