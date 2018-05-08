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

using namespace std;
using namespace boost;
using boost::asio::ip::tcp;

int main() {
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
		boost::array<char, 128> buf1;
		boost::array<char, 128> buf2;
		system::error_code error;
		string name1;
		string name2;
		size_t len1 = socket1.read_some(asio::buffer(buf1), error);
		size_t len2 = socket2.read_some(asio::buffer(buf2), error);
		int g1 = stoi(buf1.data());
		int g2 = stoi(buf2.data());
		int c1 = abs(randnum - g1);
		int c2 = abs(randnum - g2);
		//string First = " goes first.\n";
		if(c1 < c2) {
		string First = name1 + " goes first.\n";
			asio::write(socket1, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
		}else if(c2 < c1) {
		string First = name2 + " goes first.\n";
			asio::write(socket1, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
			asio::write(socket2, boost::asio::buffer(First),asio::transfer_all(), ignored_error);
		}
	} catch (std::exception& e) {
		cerr << e.what() << endl;
	}

	return 0;
}
