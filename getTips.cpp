#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

string getHealthTip(unordered_map<int, string> healthTips, int index) {
	return healthTips[index];
}

void initMap(unordered_map<int, string> &map) {
	int count = 0;

	ifstream inFile("tips");
	if (!inFile.is_open()) {
		exit(-1);
	}

	while(true) {
    string line;
    getline(inFile, line);
		if (inFile.fail()) {
	    break;
  	}
		map.insert({count++, line});
	}
}

