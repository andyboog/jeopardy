#include<iostream>
#include<queue>
#include<vector>

//so once I load more of the questions, we can just have the player ask for a category and the number of points
//the number of points will determine which question is picked
//let me know if you would like to do something different

bool gaming(int points){
    cout << "Backup Agents in Elite Beat Agents." << endl;
    cout << "A. Who are Agents Morris and Derek?" << endl;
    cout << "B. Who are Agents K and J?" << endl;
    cout << "C. Who are Agents Mulder and Skully?" << endl;
    cout << "type answer here: ";
    char answer;
    cin >> answer;
    if(toupper(answer) == 'A'){
        return true;
    }
    else return false;
}
