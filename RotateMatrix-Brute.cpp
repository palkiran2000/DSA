#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int> > &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int> > rotated(m, vector<int>(n, 0));

    // Populate the rotated matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }

    matrix = rotated;

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int> > matrix(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(matrix);

    return 0;
}
