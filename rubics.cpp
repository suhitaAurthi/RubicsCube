#include <bits/stdc++.h>
using namespace std;

void print(vector<string> s1, vector<string> s1p, vector<string> s2, vector<string> s2p, vector<string> s3, vector<string> s3p)
{
    cout<<"s1\n";
    for(auto it: s1) {
        cout<<it<<endl;
    }
    cout<<"s1p\n";
    for(auto it: s1p) {
        cout<<it<<endl;
    }
    cout<<"s2\n";
    for(auto it: s2) {
        cout<<it<<endl;
    }
    cout<<"s2p\n";
    for(auto it: s2p) {
        cout<<it<<endl;
    }
    cout<<"s3\n";
    for(auto it: s3) {
        cout<<it<<endl;
    }
    cout<<"s3p\n";
    for(auto it: s3p) {
        cout<<it<<endl;
    }
}


int main()
{
    vector<string> s1={"ww", "ww"}, s1p={"gg", "gg"}, s2={"rr", "rr"}, s2p={"bb", "bb"}, s3={"oo", "oo"}, s3p={"yy", "yy"};
    int t;
    cin>>t;
    while(t--) {
        int move; cin>>move;
        char c; cin>>c;
        if(move==2) {

            vector<string> temp;
            char tem;
            if(c=='l'){
                temp=s1;
                s1=s2p;
                s2p=s1p;
                s1p=s2;
                s2=temp;
                
                tem=s3[0][0];
                s3[0][0]=s3[1][0];
                s3[1][0]=s3[1][1];
                s3[1][1]=s3[0][1];
                s3[0][1]=tem;
                
                tem=s3p[0][0];
                s3p[0][0]=s3p[1][0];
                s3p[1][0]=s3p[1][1];
                s3p[1][1]=s3p[0][1];
                s3p[0][1]=tem;
            }
            
            else if(c=='r'){
                temp=s1;
                s1=s2;
                s2=s1p;
                s1p=s2p;
                s2p=temp;

                tem=s3[0][0];
                s3[0][0]=s3[0][1];
                s3[0][1]=s3[1][1];
                s3[1][1]=s3[1][0];
                s3[1][0]=tem;

                tem=s3p[0][0];
                s3p[0][0]=s3p[0][1];
                s3p[0][1]=s3p[1][1];
                s3p[1][1]=s3p[1][0];
                s3p[1][0]=tem;
            }
            
            else if(c='n') {}
        }

        // print(s1, s1p, s2, s2p, s3, s3p); 
        else if(move == 1) {
            if(c=='u') {
                string s;
                s+=(s1[0][1]);
                s+=(s1[1][1]);
                s1[0][1] = s3p[0][1];
                s1[1][1] = s3p[1][1];
                s3p[0][1] = s1p[0][1];
                s3p[1][1] = s1p[1][1];
                s1p[0][1] = s3[0][1];
                s1p[1][1] = s3[1][1];
                s3[0][1] = s[0], s3[1][1] = s[1];
            }

            else if(c=='d') {
                string s;
                s+=(s1[0][1]);
                s+=(s1[1][1]);
                s1[0][1]=s3[0][1];
                s1[1][1]=s3[1][1];
                s3[0][1]=s1p[0][1];
                s3[1][1]=s1p[1][1];
                s1p[0][1]=s3p[0][1];
                s1p[1][1]=s3p[1][1];
                s3p[0][1]=s[0];
                s3p[1][1]=s[1];
            }
            else if(c=='r'){
                string s;
                s+=(s1[1][0]);
                s+=(s1[1][1]);
                s1[1][0]=s2[1][0];
                s1[1][1]=s2[1][1];
                s2[1][0]=s1p[1][0];
                s2[1][1]=s1p[1][1];
                s1p[1][0]=s2p[1][0];
                s1p[1][1]=s2p[1][1];
                s2p[1][0]=s[0];
                s2p[1][1]=s[1];
            }
            else if(c=='l'){
                string s;
                s+=(s1[1][0]);
                s+=(s1[1][1]);
                s1[1][0] = s2p[1][0];
                s1[1][1] = s2p[1][1];
                s2p[1][0] = s1p[1][0];
                s2p[1][1] = s1p[1][1];
                s1p[1][0] = s2[1][0];
                s1p[1][1] = s2[1][1];
                s2[1][0] = s[0], s2[1][1] = s[1];
            }

            
        }
    }

    print(s1, s1p, s2, s2p, s3, s3p); 

    

}