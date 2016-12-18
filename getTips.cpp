#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

string getHealthTip(unordered_map<int, string> healthTips, int index) {
	string result = healthTips[index];
	return result;
}

int main () {

	unordered_map<int, string> healthTips;	
	int count = 0;
  
	ifstream inFile("tips");
	if (!inFile.is_open()) {
		return -1;
	}

	while(true) {
        string sName;
        // The line below doesn't work if the name has space(s).
        // inFile >> sName;
        // Read a line from the input file and save it in string.
        getline(inFile, sName);
				if (inFile.fail()) {	
			    break;
      	}
				healthTips.insert({count++, sName});
	}

	string result = getHealthTip(healthTips, 2);
	cout << result << endl;
}
