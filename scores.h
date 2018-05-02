#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

// "int b" should be the amount of points the player receives
// for answering the question correctly
int correct(queue<int>a, int b) {
    int new_points = a.back() + b;
    return new_points;
}

// "int c" should be the amount of points the player loses
// for answering the question incorrectly
int incorrect(queue<int>c, int d) {
    int new_points = c.back() - d;
    if (new_points <= 0) {
        cout << "you lose!" << endl;
        exit(0);
    }
    return new_points;
}