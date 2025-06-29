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
   if(r<maze.size()-1 )
   {
    mazeP(p+'D',r+1,c,maze);
   }
   if(c<maze[0].size()-1  )
    {
       mazeP(p+'R',r,c+1,maze);
    }
    
}
int main()
{
    vector<vector<bool>> maze{
        {true,true,true},
        {true,false,true},
        {true,true,true}
    };
    string p;
    mazeP(p,0,0,maze);

}