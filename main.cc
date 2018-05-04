#include<iostream>
#include<cmath>
#include<string>
#include<queue>
#include "scores.h"
#include "jeopardyArt.h"
#include "trivia.h" 

using namespace std;

int main() {
	queue<int>scores;
	scores.push(0);
	cout << "Welcome to..." << endl;
	jeopardyArt();
	cout << "To start this game, you will need to choose from which category the question will come." << endl;
	cout << "The categories offered are: GAMING, NORSE MYTHOLOGY (not the Marvel kind), AMERICAN HISTORY," << endl;
	cout << "JEOPARDY, DISNEY, and BOWLING TERMS." << endl;
	cout << "Note: please type the category names as they are typed above." << endl;
	string category;
	cout << "Category: ";
	cin >> category;
	cout << "Awesome! Next you will need to choose how many points you would like the question to be worth." << endl;
	cout << "The points range from 100 - 600 by increments of 100." << endl;
	cout << "Note: You can only choose each point value once throughout the game." << endl;
	int points;
	cin >> points;
	if(category == "GAMING"){
		if(gaming(points)){
			cout << "That is correct!" << endl;
			scores.push(correct(scores, points));
		}
		else {
			cout << "Sorry! That is incorrect!" << endl;
			scores.push(incorrect(scores, points));
		}
		cout << "Current Point Value: " << scores.back() << endl;

	}
	else if (category == "NORSE MYTHOLOGY"){
		if(NorseMythology(points)){
			cout << "That is correct!" << endl;
			scores.push(correct(scores, points));
		}
		else {
			cout << "Sorry! That is incorrect!" << endl;
			scores.push(incorrect(scores, points));
		}
		cout << "Current Point Value: " << scores.back() << endl;

	}
	else if (category == "AMERICAN HISTORY"){
		if(AmericanHistory(points)){
			cout << "That is correct!" << endl;
			scores.push(correct(scores, points));
		}
		else {
			cout << "Sorry! That is incorrect!" << endl;
			scores.push(incorrect(scores, points));
		}
		cout << "Current Point Value: " << scores.back() << endl;

	}
	else if (category == "DISNEY"){
		if(Disney(points)){
			cout << "That is correct!" << endl;
			scores.push(correct(scores, points));
		}
		else {
			cout << "Sorry! That is incorrect!" << endl;
			scores.push(incorrect(scores, points));
		}
		cout << "Current Point Value: " << scores.back() << endl;

	}
	else if (category == "BOWLING TERMS"){
		if(BowlingTerms(points)){
			cout << "That is correct!" << endl;
			scores.push(correct(scores, points));
		}
		else {
			cout << "Sorry! That is incorrect!" << endl;
			scores.push(incorrect(scores, points));
		}
		cout << "Current Point Value: " << scores.back() << endl;

	}
	/*cout << "Here's your first question for 100 points" << endl;
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
	*/
}

