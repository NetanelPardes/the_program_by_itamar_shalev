#include <iostream>
using namespace std;
#include <vector>

void solveSudoku(vector<vector<char>>& board);
bool tryToSolve(vector<vector<char>>& board);
bool checkNum(const vector<vector<char>>& board, int row, int column, char k);

void solveSudoku(vector<vector<char>>& board)
{
	tryToSolve(board);
}
bool tryToSolve(vector<vector<char>>& board)
{
	for (int row = 0; row < 9; row++)
	{
		for (int column = 0; column < 9; column++)
		{
			if (board[row][column] == '.')
			{
				for (char k = '1'; k <= '9'; k++)
				{
					if (checkNum(board, row, column, k))
					{
						board[row][column] = k;
						if (tryToSolve(board))
						{
							return true;
						}
						board[row][column] = '.';
					}
				}
				return false;
			}
		}
	}
	return true;
}
bool checkNum(const vector<vector<char>>& board, int row, int column, char k)
{
	for (int i = 0; i < 9; i++)
	{
		if (board[row][i] == k || board[i][column] == k || board[3 * (row / 3) + i / 3][3 * (column / 3) + i % 3] == k)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	vector<vector<char>> my_test_1 = {
		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}
	};
	solveSudoku(my_test_1);
	cout << "The solution of Sudoku is: " << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << my_test_1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	vector<vector<char>> my_test_2 = {
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'}
	};

	solveSudoku(my_test_2);
	cout << "The solution of Sudoku is: " << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << my_test_2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;

}
