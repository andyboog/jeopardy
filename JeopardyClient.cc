#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <unistd.h>
#include "jeopardyArt.h"
#include "trivia.h"
#include "catchecker.h"
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <cstdlib>
#include <stdio.h>


using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

asio::io_service io_service;
tcp::resolver resolver(io_service);

string convert(string f) {
	for (int i = 0; i < f.length(); i++) {
		f[i] = toupper(f[i]);
	}
	return f;
};

int main() {
	tcp::resolver::query query("127.0.0.1", "1025");
	//  tcp::resolver::query query(argv[1], argv[2]);
	tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
	tcp::resolver::iterator end;

	tcp::socket socket(io_service);
	system::error_code error = asio::error::host_not_found;
	while (error && endpoint_iterator != end) {
		socket.close();
		socket.connect(*endpoint_iterator++, error);
	}
	if (error)
		throw system::system_error(error);

	//system("clear");
	cout << "Welcome to..." << endl;
	jeopardyArt();
	cout << "Type 'MINION' to begin." << endl;
	string response1;
	cout << "Type here: ";
	cin >> response1;
	response1 = convert(response1);
	if (response1 != "MINION") {
		cout << "exiting..." << endl;
		sleep(3);
		std::system("clear");
		exit(0);
	}
	std::system("clear");
	string name;
	cout << "Please enter in your name:" ;
	cin >> name;
	asio::write(socket, boost::asio::buffer(name), asio::transfer_all());
	std::system("clear");
	/*cout << "To decide who is going first please choose a number between 1-10\n";
	int x;
	cin >> x;
	string num1 = to_string(x);
	asio::write(socket, boost::asio::buffer(num1),asio::transfer_all());*/
	//std::system("clear");
	boost::array<char, 128> buf;

	size_t len = socket.read_some(asio::buffer(buf), error);
	//cout << buf.data()<< endl;
	string pre = buf.data();
	string compname;
	int j = 0;
	for (int i = 21; i < pre.length() - 1; ++i) {
		compname[j] = pre[i];
		++j;
	}
//	sleep(500);
	categoryArt();
	cout << "To start this game, you will need to choose from which category the question will come." << endl;
	cout << "The categories offered are: GAMING, NORSE MYTHOLOGY (not the Marvel kind), AMERICAN HISTORY," << endl;
	cout << "JEOPARDY, DISNEY, and BOWLING TERMS." << endl;
	cout << "Press Enter to continue." << endl;
	string input;
	cin.ignore();
	getline(cin, input);
	int score1 = 0;
	int score2 = 0;
	int numQues = 25;
	while(numQues != 0) {
		std::system("clear");
		categoryArt();
		cout << "Note: please type the category names as they are typed above." << endl;
		cout << pre;
		string category;
		cout << "Category: ";
		//cin.ignore();
		getline(cin, category);
		category = convert(category);
		cout << "Awesome! Next you will need to choose how many points you would like the question to be worth." << endl;
		cout << "The points range from 100 - 500 by increments of 100." << endl;
		cout << "Note: You can only choose each point value once throughout the game." << endl;
		int points;
		string pointStr;
		cin >> points;
		if(!isdigit(points)){
			while(!isdigit(points)){
				cout << "Invalid Response. Please try again: ";
			}
		}
		pointStr = to_string(points);
		std::system("clear");
		if (category != "GAMING" && category != "NORSE MYTHOLOGY" && category != "AMERICAN HISTORY" && category != "JEOPARDY" && category != "DISNEY" && category != "BOWLING TERMS") {
			cout << "Invalid Input" << endl;
			cout << "Press Enter to continue." << endl;
			string input;
			cin.ignore();
			getline(cin, input);
			continue;
		}
		if (!checker(category, points)) {
			if (category == "GAMING") {
				if (gaming(points)) {
					cout << "That is correct!" << endl;
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				} else {
					cout << "Sorry! That is incorrect!" << endl;
					pointStr = to_string(-points);
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				}

			} else if (category == "NORSE MYTHOLOGY") {
				if (NorseMythology(points)) {
					cout << "That is correct!" << endl;
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				} else {
					cout << "Sorry! That is incorrect!" << endl;
					pointStr = to_string(-points);
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				}

			} else if (category == "AMERICAN HISTORY") {
				if (AmericanHistory(points)) {
					cout << "That is correct!" << endl;
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				} else {
					cout << "Sorry! That is incorrect!" << endl;
					pointStr = to_string(-points);
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				}

			} else if (category == "DISNEY") {
				if (Disney(points)) {
					cout << "That is correct!" << endl;
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				} else {
					cout << "Sorry! That is incorrect!" << endl;
					pointStr = to_string(-points);
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				}

			} else if (category == "BOWLING TERMS") {
				if (BowlingTerms(points)) {
					cout << "That is correct!" << endl;
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				} else {
					cout << "Sorry! That is incorrect!" << endl;
					pointStr = to_string(-points);
					asio::write(socket, boost::asio::buffer(pointStr), asio::transfer_all());
				}

			}
			boost::array<char, 128> pts;
			size_t len5 = socket.read_some(asio::buffer(pts), error);
			string placeholder = pts.data();
			string sc1;
			string sc2;
			int j = 0;
			for (int i = 0; i < placeholder.length() - 3; ++i) {
				sc1[j] = placeholder[i];
				++j;
			}
			score1 = stoi(sc1);
			j = 0;
			for (int i = 3; i < placeholder.length(); ++i) {
				sc2[j] = placeholder[i];
				++j;
			}
			score1 = stoi(sc1);
			score2 = stoi(sc2);
			cout << "Your score: " << score1 << endl;
			cout << compname.data() << "'s score: " << score2 << endl;
			cout << "Press Enter to continue." << endl;
			string input;
			cin.ignore();
			getline(cin, input);
		} else {
			cout << category << " " << points << " already chosen, please choose another." << endl;
			cout << "Press Enter to continue." << endl;
			string input;
			cin.ignore();
			getline(cin, input);
		}
	numQues--;	
	}
	if (score1 < 0 && score2 < 0) {
		std::system("clear");
		loseArt();
		exit(1);
	}
	if (score1 < 0 && score2 > 0) {
		std::system("clear");
		loseArt();
		exit(1);
	} 
	if (score1 > 0 && score2 < 0) {
		std::system("clear");
		winArt();
		exit(1);
	}
	if(score1 > score2){
	    std::system("clear");
	    winArt();
	    exit(1);
	}
	if(score1 < score2){
	    std::system("clear");
	    loseArt();
	    exit(1);
	}

}


