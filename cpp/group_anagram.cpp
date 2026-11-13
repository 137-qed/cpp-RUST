#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
	cout << boolalpha;

	std::string strs;
	cout << "Enter a string: ";
	cin >> s;

	std::unordered_map<char, int>freq;

	for (int i = 0; i < s.size(); ++i){
		freq[s[i]]++;
	}


	for (auto pair : freq) {
		if (pair.second >= 0){    // if each letter is greater than 3 and can form three letter word than all anagrams could be paired, diffrence is you applied mind found the solution, ai can asnwer it now but it only has been answered cuz similar solution ha

			 ;
			return 0;
		}

	}
	cout << true;
	return 0;
}







