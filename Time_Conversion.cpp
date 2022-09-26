#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s1) {
    string ans="";    
    string hs=s1.substr(0,2);
    string ms= s1.substr(3,2);
    string ss= s1.substr(6,2);
    // cout << hs << " " << ms <<  " " <<  ss;

    int h=stoi(hs),m=stoi(ms),s=stoi(ss);
    // int h=0,m=0,s=0;
    // cout << h << " " << m <<  " " <<  s;
    if(s1[8]=='P'){
        h+=12;
        if(h>=24){
            h-=24;
        }        
    }
    if(h<10)
        ans+="0";
    ans+=to_string(h);
    ans+=":";
    if(m<10)
        ans+="0";
    ans+=to_string(m);
    ans+=":";
    if(s<10)
        ans+="0";
    ans+=to_string(s);
    return ans;   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
