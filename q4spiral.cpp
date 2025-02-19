#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

bool isInBounds(int i, int j){
    if (i < 0 || i >= R || j < 0 || j >= C)
        return false;
    return true;
}

// check if the position is blocked
bool isBlocked(int matrix[R][C], int i, int j){
   if (!isInBounds(i, j))
        return true;
   if (matrix[i][j] == -1)
        return true;
   return false;
}

// DFS code to traverse spirally
void spirallyDFSTravserse(int matrix[R][C], int i, int j, int dir, vector<int>& res)
{
    if (isBlocked(matrix, i, j))
        return;
    bool allBlocked = true;
    for (int k = -1; k <= 1; k += 2) {
        allBlocked = allBlocked && isBlocked(matrix, k + i, j) && isBlocked(matrix, i, j + k);
    }

    res.push_back(matrix[i][j]);
    matrix[i][j] = -1;
    if (allBlocked) {
        return;
    }

    // dir: 0 - right, 1 - down, 2 - left, 3 - up
    int nxt_i = i;
    int nxt_j = j;
    int nxt_dir = dir;

    if (dir == 0) {
        if (!isBlocked(matrix, i, j + 1)) {
            nxt_j++;
        }
        else {
            nxt_dir = 1;
            nxt_i++;
        }
    }
    else if (dir == 1) {
        if (!isBlocked(matrix, i + 1, j)) {
            nxt_i++;
        }
        else {
            nxt_dir = 2;
            nxt_j--;
        }
    }
    else if (dir == 2) {
        if (!isBlocked(matrix, i, j - 1)) {
            nxt_j--;
        }
        else {
            nxt_dir = 3;
            nxt_i--;
        }
    }
    else if (dir == 3) {
        if (!isBlocked(matrix, i - 1, j)) {
            nxt_i--;
        }
        else {
            nxt_dir = 0;
            nxt_j++;
        }
    }
    spirallyDFSTravserse(matrix, nxt_i, nxt_j, nxt_dir, res);
}

// to traverse spirally
vector<int> spirallyTraverse(int matrix[R][C])
{
    vector<int> res;
    spirallyDFSTravserse(matrix, 0, 0, 0, res);
    return res;
}

