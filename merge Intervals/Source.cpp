#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

	int start = intervals[0][0];
	int end = intervals[0][1];

	for (int i = 1; i < intervals.size(); i++)
	{
		for (int j = 0; j < 2; j++)
		{

			if(j == 0)
				if (intervals[i][j] < end) {
					
				}

		}
	}
}

int main() {

	vector<vector<int>> intervals = { {1, 3}, {2, 6}, {8, 10}, {15, 18} };

	vector<vector<int>> newIntervals = merge(intervals);

	return 0;
}