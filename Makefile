a.out: main.cc scores.h jeopardyArt.h trivia.h
  g++ -std=c++11 main.cc 
clean:
  rm a.out
