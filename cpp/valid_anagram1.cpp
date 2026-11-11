#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
	cout << boolalpha;

	std::string s;
	cout << "Enter a string: ";
	cin >> s;

	std::string t;
	cout << "Enter a second string: ";
	cin >> t;

	if (s.size() != t.size()){
		cout << false;
		return 0;
	}

	std::unordered_map<char, int>freq;

	for (int i = 0; i < s.size(); ++i){
		freq[s[i]]++;
	}

	for (int i = 0; i < t.size(); ++i){
		freq[t[i]]--;
	}

	for (auto pair : freq) {
		if (pair.second != 0){
			cout << false ;
			return 0;
		}

	}
	cout << true;
	return 0;
}

