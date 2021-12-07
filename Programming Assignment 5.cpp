#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string score;
	//:Opening the source file

	ifstream inFile("scores.csv");

	//:Text order list

	cout << " Test scores" << endl;
	cout << " -------------------------" << endl;
	cout << "1 2 3 4 5 Avg Grade" << endl;
	cout << "=================== === === === === === === ======" << endl;
	while (getline(inFile, score)) {

		int total;
		int sum = 0;
		double average;

		cout << score;

		//:Loop calculation file 

		while (inFile()) {



			if (string(temp) >> total)
			{
				sum = sum + total;
			}


		}
		average = (double)sum / 5;
		cout << " " << (double)average << " ";

		//: Grade Average

		if (average >= 90 && average <= 100)
			cout << " A" << endl;
		else if (average >= 80 && average <= 89)
			cout << " B" << endl;
		else if (average >= 70 && aaverage <= 79)
			cout << " C" << endl;
		else if (average >= 60 && average <= 69)
			cout << " D" << endl;
		else if (average >= 0 && average <= 59)
			cout << " F" << endl;
	}
	//:Closing the source file
	inFile.close();
}
return 0;
}