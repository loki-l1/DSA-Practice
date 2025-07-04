#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> s;

        // Edge case: only one person
        if (n == 1) {
            return 0;
        }

        // Push all people into the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Eliminate non-celebrities
        while (s.size() > 1) {
            int i = s.top(); s.pop();
            int j = s.top(); s.pop();

            if (mat[i][j] == 0) {
                s.push(i);
            } else {
                s.push(j);
            }
        }

        int celeb = s.top();

        // Final check
        for (int i = 0; i < n; i++) {
            if (i != celeb && (mat[i][celeb] == 0 || mat[celeb][i] == 1)) {
                return -1;
            }
        }

        return celeb;
    }
};

int main() {
    Solution sol;

    // Test case: celebrity is person 2
    vector<vector<int>> mat = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    int result = sol.celebrity(mat);

    if (result == -1) {
        cout << "No celebrity found." << endl;
    } else {
        cout << "Celebrity is person: " << result << endl;
    }

    return 0;
}
