#include<iostream>
#include<vector>
using namespace std;
// This function generates all subsequences of the input string 'up'.
// At each step, it has two choices: include the current character or exclude it.
// Backtracking happens naturally via the call stack:
// - Each recursive call has its own copy of 'p' and 'up'.
// - After exploring one path (include), the function returns and explores the other path (exclude).
// - No explicit "undo" is needed because each call's variables are local.
// This way, all possible subsequences are printed when 'up' becomes empty.
void subSeq(string p,string up)
{
    if(up.empty())
    {
        cout<<p<<",";
       return;
    }
    char ch=up.at(0);
    subSeq(p+ch,up.substr(1));
    subSeq(p,up.substr(1));

}
vector<string> subSeq1(string p,string up)
{
    if(up.empty())
    {
       return{p};
    }
    char ch=up.at(0);
   vector<string> left= subSeq1(p+ch,up.substr(1));
    vector<string> right= subSeq1(p,up.substr(1));
    left.insert(left.end(),right.begin(),right.end());
    return left;

}
int main()
{
    //subSeq("","abc");
     vector<string> result = subSeq1("", "abc");
    for (const string& s : result) {
        cout << s << ",";
    }
    cout << endl;
}
