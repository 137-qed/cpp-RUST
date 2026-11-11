#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	cout << boolalpha;

	string s;
	cout << "Enter any string: ";
	cin >> s;

	string t;
	cout << "Enter any string: ";
	cin >> t;

	if (s.size() != t.size()){
		cout << false << '\n';
		return 0;
	}

	unordered_map<char, int>freqs;
	unordered_map<char, int>freqt;

	for(int i = 0; i < s.size(); ++i){
		freqs[s[i]]++;
	}

	for(int i = 0; i < t.size(); ++i){
		freqt[t[i]]++;
	}

	auto pair1 = freqs.begin();
	auto pair2 = freqt.begin();

	for(; pair1 != freqs.end(); ++pair1){
		cout << pair1->first << " : " << pair1->second;
	}

	for(; pair2 != freqt.end(); ++pair2){
		cout << pair2->first << " : " << pair2->second;
	}

	if (pair1 != pair2){
		cout << false << '\n';
		return 0;
	}

	cout << true << '\n';
	return 0;

}
