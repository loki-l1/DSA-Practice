#include<iostream>
#include<vector>
using namespace std;
void mazeP(string p, int r, int c, vector<vector<bool>> &maze)
{
    if(r == maze.size()-1&&c==maze[0].size()-1)
    {
        cout<<p<<",";
        return;
    }
    if(maze[r][c]==false)
    {
        return;
    }
    maze[r][c]=false;
   if(r<maze.size()-1 )
   {
    mazeP(p+'D',r+1,c,maze);
   }
   if(c<maze[0].size()-1)
    {
       mazeP(p+'R',r,c+1,maze);
    }
    if(r>0)
    {
        mazeP(p+'U',r-1,c,maze);
    }
    if(c>0)
    {
        mazeP(p+'L',r,c-1,maze);
    }
    maze[r][c]=true;
    
}
int main()
{
    vector<vector<bool>> maze{
        {true,true,true},
        {true,true,true},
        {true,true,true}
    };
    string p;
    mazeP(p,0,0,maze);

}