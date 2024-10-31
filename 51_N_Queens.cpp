//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<vector<string>> solveNQueens(int n);
//void tryToSolve(vector<vector<string>>& solutions, vector<string>& the_board, int row, int n);
//bool checkQueen(const vector<string>& the_board, int row, int column, int n);
//
//vector<vector<string>> solveNQueens(int n)
//{
//	vector<vector<string>> solutions;
//	vector<string> the_board(n, string(n, '.'));
//	tryToSolve(solutions, the_board, 0, n);
//	return solutions;
//}
//
//void tryToSolve(vector<vector<string>>& solutions, vector<string>& the_board, int row, int n)
//{
//	if (row == n)
//	{
//		solutions.push_back(the_board);
//		return;
//	}
//
//	for (int column = 0; column < n; column++)
//	{
//		if (checkQueen(the_board, row, column, n))
//		{
//			the_board[row][column] = 'Q';
//			tryToSolve(solutions, the_board, row + 1, n);
//			the_board[row][column] = '.';
//		}
//	}
//}
//
//bool checkQueen(const vector<string>& the_board, int row, int column, int n)
//{
//	for (int i = 0; i < row; i++)
//	{
//		if (the_board[i][column] == 'Q' || column - (row - i) >= 0 && the_board[i][column - (row - i)] == 'Q' || column + (row - i) < n && the_board[i][column + (row - i)] == 'Q')
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//int main()
//{
//	int size = 4;
//	int asciiValue = 65;
//	vector<vector<string>> test_1 = solveNQueens(size);
//	cout << test_1.size() << endl;
//	cout << "The options to win the N Kings game on a board " << size << endl;
//	for (int i = 0; i < test_1.size(); i++)
//	{
//		cout << static_cast<char>(asciiValue) << endl;
//		for (int j = 0; j < size; j++)
//		{
//			cout << test_1[i][j] << "  ";
//			cout << endl;
//		}
//		cout  << endl;
//		asciiValue++;
//	}
//	return 0;
//}
