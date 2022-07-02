#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) {

	int size = nums.size();
	int sum = 0;
	int max_sum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum = 0;
			for (int k = j; k <= j+i; k++)	
			{

				sum += nums[k];
			}
			if (sum > max_sum)
				max_sum = sum;
		}
		size--;
	}

	return max_sum;
}

//vector<int> SubArrayfunc(vector<int>& nums) {
//
//	
//}

int main() {

	//vector<int> nums = { 1, 2, 3, 4, 5 };
	//vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	vector<int> nums = { 5,4,-1,7,8 };

	cout << maxSubArray(nums);

	//vector<int>subArray = SubArrayfunc(nums);

	/*for (int i = 0; i < subArray.size(); i++)
	{
		cout << subArray[i] << "  ";
	}*/


	return 0;
}