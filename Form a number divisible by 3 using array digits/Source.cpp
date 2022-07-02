#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <valarray>
#include <algorithm>
using namespace std;

vector<int> toNumber(int arr[], int size) {

	string numberString = "";
	vector<int> newArr;
	for (int i = 0; i < size; i++)
	{
		numberString += to_string(arr[i]);
	}

	int length = numberString.length();

	for (int i = 0; i < length; i++)
	{
		newArr.push_back(numberString[i] - '0');
	}
	
	return newArr;
}



int main() {

	vector<vector<int>> all_permutations;
	int size;
	bool flag = false;
	int curr_permutation;

	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	//flattening the array into a single integer
	vector<int> flattened_array = toNumber(arr, size);

	//sorting the flattened array to, so we can check next greater permutation
	sort(flattened_array.begin(), flattened_array.end());
	do {

		all_permutations.push_back(flattened_array);

	} while (next_permutation(flattened_array.begin(), flattened_array.end()));


	for (int i = 0; i < all_permutations.size(); i++) {
		curr_permutation = 0;
		for (int j = 0; j < all_permutations[i].size(); j++) {

			// appending the indexes of current permutation into a number 
			curr_permutation += all_permutations[i][j];
			if (j < all_permutations[i].size() - 1)
				curr_permutation *= 10;

			// checking if the  number is divisible by 3 or not
			if (j == all_permutations[i].size() - 1 && curr_permutation % 3 == 0)
			{
				flag = true;
				break;
			}
		}
	}

	if (flag) {
		cout << "is divisible by 3" << endl;
	}
	else {
		cout << "Not divisible by 3" << endl;
	}

	return 0;
}

