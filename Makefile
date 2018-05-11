CC = g++
CCFLAGS = -std=c++11

all: JeopardyClient JeopardyServer

JeopardyClient: JeopardyClient.cc jeopardyArt.h trivia.h catchecker.h linkedlist.h
	$(CC) $(CCFLAGS) -O3 JeopardyClient.cc -lncurses -lboost_system -lboost_thread -pthread -oJeopardyClient

JeopardyServer: JeopardyServer.cc scores.h queue.h
	$(CC) $(CCFLAGS) -O3 JeopardyServer.cc -lboost_system -lboost_thread -pthread -oJeopardyServer
clean:
	rm -f JeopardyClient JeopardyServer *.o core
