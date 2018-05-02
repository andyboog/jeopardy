#include<iostream>
#include<cmath>
#include<queue>
#include "scores.h"
#include "jeopardyArt.h"

using namespace std;

int main() {
	cout << "Welcome to Jeopardy!" << endl;
	cout << "Here's your first question for 100 points" << endl;
	cout << "What's the first letterin the alphabet?" << endl;
	cout << "a. A" << endl;
	cout << "b. B" << endl;
	cout << "c. C" << endl;
	queue<int>scores;
	char answer;
	cin >> answer;
	if (answer != 'a') {
		cout << "That was incorrect!" << endl;
		scores.push(-100);
	} else {
		scores.push(100);
	}
	cout << "Your current score is: " << scores.back() << endl;
	cout << "On to your next question for 200 points" << endl;
	cout << "If you are given 3 rubber ducks, how many rubber ducks do you have?" << endl;
	cout << "a. 3" << endl;
	cout << "b. 5" << endl;
	cout << "c. this question is stupid lol" << endl;
	cin >> answer;
	if (answer == 'a' || answer == 'c') {
		scores.push(correct(scores, 200));
	} else {
		scores.push(incorrect(scores, 200));
		cout << "That was incorrect!" << endl;
	}
	cout << "Congratulations you finished with " << scores.back() << " points!" << endl;
}

