//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int rob(vector<int>& nums);
//int tryToSteal(vector<int>& nums, int home, vector<int>& memo);
//
//int max = 0;
//
//int rob(vector<int>& nums)
//{
//	vector<int> memo(nums.size(), -1);
//	return tryToSteal(nums, 0, memo);
//}
//
//int tryToSteal(vector<int>& nums, int home, vector<int>& memo)
//{
//	if (home >= memo.size())
//	{
//		return 0;
//	}
//
//
//	int option_a = nums[home] + tryToSteal(nums, home + 2, memo);
//	int option_b = tryToSteal(nums, home + 1, memo);
//
//	memo[home] = std::max(option_a, option_b);
//
//	return memo[home];
//}
//
//
//int main()
//{
//	vector<int> test_1 = { 1, 2, 3, 1 };
//	int max_rob1 = rob(test_1);
//	cout << "The biggest money he can steal is: " << max_rob1 << endl;
//
//	vector<int> test_2 = {
//		5, 12, 23, 34, 45,56, 67, 78, 89, 90,11, 22, 33, 44, 55,
//		66, 77, 88, 99, 100,101, 200, 300, 400, 500,600, 700, 800, 900, 1000,1500, 2000};
//	int max_rob2 = rob(test_2);
//	cout << "The biggest money he can steal is: " << max_rob2 << endl;
//	return 0;
//}