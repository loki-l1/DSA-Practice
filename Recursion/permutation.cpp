#include<iostream>
using namespace std;

// Recursive function to print permutations
void printPermutations(string up, string p ) {
   if(up.empty())
   {
    cout<<p<<","<<flush;
    return;
   }
  
   for(int i=0;i<=p.length();i++)
   {
     char ch=up.at(0);
    string f=p.substr(0,i);
    string s=p.substr(i);
    printPermutations(up.substr(1),f+ch+s);
   }
}

int main() {
   // string str = "abc";
   // cout << "Permutations are:" << endl;
    printPermutations("abc","");
    
    return 0;
}