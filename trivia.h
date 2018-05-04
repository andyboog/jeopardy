#include<iostream>
#include<queue>
#include<vector>

//so once I load more of the questions, we can just have the player ask for a category and the number of points
//the number of points will determine which question is picked
//let me know if you would like to do something different

bool gaming(int points){
    if(points == 100){
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
}

bool NorseMythology(int points){
    if(points == 100){
        cout << "Commonly believed to be one in the same with Odins Wife Frigga" << endl;
        cout << "A. Who is Lady Sif?" << endl;
        cout << "B. Who is Freya?" << endl;
        cout << "C. Who is Laufay?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
        if(toupper(answer) == 'B'){
            return true;
        }
        else return false;
    }
}

bool AmericanHistory(int points){
    if(points == 100){
        //stupid sudo question
        cout << "Colors of the American Flag" << endl;
        cout << "A. What are Red, White, and Blue?" << endl;
        cout << "B. What are Red and White?" << endl;
        cout << "C. What are Red, Green, and Yellow?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
}

bool Disney(int points){
    if(points == 100){
        //another sudo question
        cout << "She was trapped in a tower" << endl;
        cout << "A. Who is Fiona?" << endl;
        cout << "B. Who is Rapunzel?" << endl;
        cout << "C. Who is Ariel?" << endl;
        char answer;
        cin >> answer;
        if(toupper(answer) == 'B'){
            return true;
        }
        else return false;
    }
}

//this is just a sudo category, since I'm not sure what Dylan wants the last one to be

bool BowlingTerms(int points){
    // get it?... it starts with a 'b'...hehe :)
    if(points == 100){
        // definitely a sudo question
        cout << "Bowling trash talk" << endl;
        cout << "A. What is balk?" << endl;
        cout << "B. What is balsa?" << endl;
        cout << "C. What is jam?" << endl;
        char answer;
        cin >> answer;
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
}
        
        
