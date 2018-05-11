#include<iostream>
#include<cmath>
#include "queue.h"
using namespace std;

// "int b" should be the amount of points the player receives
// for answering the question correctly
int correct(queue a, int b) {
    int new_points = a.back() + b;
    return new_points;
}

// "int c" should be the amount of points the player loses
// for answering the question incorrectly
int incorrect(queue c, int d) {
    int new_points = c.back() - d;
    return new_points;
}
