//
// server.cpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2008 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include "queue.h"
#include "scores.h"

using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

int main() {
	queue scores1;
	queue scores2;
	scores1.push(0);
	scores2.push(0);
	int port = 1025;
	srand(time (NULL));
	try {
		asio::io_service io_service;
		tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), port));
		tcp::socket socket1(io_service);
		tcp::socket socket2(io_service);
		acceptor.accept(socket1);
		acceptor.accept(socket2);
		system::error_code ignored_error;
		//asio::write(socket1, boost::asio::buffer("Welcome to..\n"),asio::transfer_all(), ignored_error);
		//asio::write(socket2, boost::asio::buffer("Welcome to..\n"),asio::transfer_all(), ignored_error);
		int randnum = rand() % 10;
		//boost::array<char, 128> buf1;
		//boost::array<char, 128> buf2;
		boost::array<char, 128> nam1;
		boost::array<char, 128> nam2;
		system::error_code error;
		size_t len3 = socket1.read_some(asio::buffer(nam1), error);
		size_t len4 = socket2.read_some(asio::buffer(nam2), error);
		string name1 = nam1.data();
		string name2 = nam2.data();
		//size_t len1 = socket1.read_some(asio::buffer(buf1), error);
		//size_t len2 = socket2.read_some(asio::buffer(buf2), error);
		//int g1 = stoi(buf1.data());
		//int g2 = stoi(buf2.data());
		//int c1 = abs(randnum - g1);
		//int c2 = abs(randnum - g2);
		/*if(c1 < c2) {
		string First = name1 + " goes first.\n";
			asio::write(socket1, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
		}else if(c2 < c1) {
		string First = name2 + " goes first.\n";
			asio::write(socket1, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
		}*/
		//string win = "You Win!\n";
		//string lose = "You Lose!\n";
		string x = "You are playing with " + name1 + "\n";
		string y = "You are playing with " + name2 + "\n";
		asio::write(socket1, boost::asio::buffer(y),asio::transfer_all(), ignored_error);
		asio::write(socket2, boost::asio::buffer(x),asio::transfer_all(), ignored_error);
		while(true){
			int points1;
			int points2;
			boost::array<char, 128> buf1;
			boost::array<char, 128> buf2;
			size_t len1 = socket1.read_some(asio::buffer(buf1), error);
			size_t len2 = socket2.read_some(asio::buffer(buf2), error);
			points1 = stoi(buf1.data());
			points2 = stoi(buf2.data());
			if(points1 < 0){
				points1 *= -1;
				scores1.push(incorrect(scores1, points1));
			}else {
				scores1.push(correct(scores1, points1));
			}
			if(points2 < 0){
				points2 *= -1;
				scores2.push(incorrect(scores2, points2));
			}else {
				scores2.push(correct(scores2, points2));
			}
			string w = to_string(scores1.back());
			string z = to_string(scores2.back());
			asio::write(socket1, boost::asio::buffer(w),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(z),asio::transfer_all(), ignored_error);
			asio::write(socket1, boost::asio::buffer(z),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(w),asio::transfer_all(), ignored_error);
			if(scores1.back() < 0 && scores2.back() < 0) {
				boost::system::error_code ec;
				socket1.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket2.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket1.close();
				socket2.close();
				break;
			}
			if(scores1.back() < 0 && scores2.back() > 0){
				//asio::write(socket1, boost::asio::buffer(lose),asio::transfer_all(), ignored_error);
				//asio::write(socket2, boost::asio::buffer(win),asio::transfer_all(), ignored_error);
				boost::system::error_code ec;
				socket1.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket2.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket2.close();
				socket1.close();
				break;
			}
			if(scores2.back() < 0 && scores1.back() > 0){
				//asio::write(socket1, boost::asio::buffer(win),asio::transfer_all(), ignored_error);
				//asio::write(socket2, boost::asio::buffer(lose),asio::transfer_all(), ignored_error);
				boost::system::error_code ec;
				socket1.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket2.shutdown(boost::asio::ip::tcp::socket::shutdown_send, ec);
				socket1.close();
				socket2.close();
				break;
			}
		}	
				
	} catch (std::exception& e) {
		cerr << e.what() << endl;
	}

	return 0;
}
