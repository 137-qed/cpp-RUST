#include <iostream>  // standard i/o library
#include <vector>   // makes vector container available
#include <unordered_map>  // an associative container which will store a key value and mapped value from vector (allows fast reterival of values comparatively)

using namespace std;

int main() {

	int n;                                        // here user will establish size of the array
	std::cout << "Enter an array size: ";
	std::cin >> n;


	std::vector<int>nums(n);                    // an array of size n is defined
	std::cout << "Enter array elements: ";      
	for (int& value : nums) {                  // this loop takes each value into particular index 'i' sequentially.
		cin >> value;
	}
	

	int target;                                // a target value is established
	std::cout << "Enter a target: ";
	std::cin >> target;

	std::unordered_map<int, int> seen;         // this container established hashmap which will store key-value pair in an array

	for (int i = 0; i < nums.size(); ++i) {         // the real execution block, this loop sequentially goes through nums
		int key = target - nums[i];                 // establishes what the key should be
		auto it = seen.find(key);                   // here I established an iterator to the key part of the hashmap

		if (it != seen.end()) {                     // this conditional checks if the relevant key is found into the hashmap
			cout << it->second << " " << i << '\n'; // second means the value of key here from the hashmap, and value is first
            return 0;
		}
	   seen[nums[i]] = i;                          // this maps the key value to the index of the nums
	}
	return{};
}
