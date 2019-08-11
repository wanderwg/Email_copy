#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int flag=0;
        for(int i=0;i<s1.size();++i)
        {
            string temp;
            if(s1[i]=='"')
            {
                ++i;
                while(i<s1.size()&&s1[i]!='"')
                {
                    temp+=s1[i];
                    ++i;
                }
                if(temp==s2)
                {
                    flag=1;
                    break;
                }
            }
            else if(s1[i]!=',')
            {
                while(i<s1.size()&&s1[i]!=',')
                {
                    temp+=s1[i];
                    ++i;
                }
                if(temp==s2)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"Ignore"<<endl;
        else
            cout<<"Important!"<<endl;
    }
    return 0;
}