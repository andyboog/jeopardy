#include<iostream>
#include<vector>
#include "linkedlist.h"

bool gaming(int points){
    LinkedList gaming_ans;
    gaming_ans.push('B');
    gaming_ans.push('C');
    gaming_ans.push('B');
    gaming_ans.push('C');
    gaming_ans.push('A');
    if(points == 100){
        cout << "Backup Agents in Elite Beat Agents." << endl;
        cout << "A. Who are Agents Morris and Derek?" << endl;
        cout << "B. Who are Agents K and J?" << endl;
        cout << "C. Who are Agents Mulder and Skully?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == gaming_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 200){
        cout << "What you have been eaten by." << endl;
        cout << "A. What is Glue?" << endl;
        cout << "B. What is a Frue" << endl;
        cout << "C. What is a Grue?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!cin){
		while(!cin){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == gaming_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 300){
        cout << "The mute protaginist of the Half-Life series." << endl;
        cout << "A. Who is Gideon Freidmen?" << endl;
        cout << "B. Who is Gordan Freeman?" << endl;
        cout << "C. Who is Grace Froman?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == gaming_ans.pop()){
            return true;
        }
        else return false;
    }
	if(points == 400){
        cout << "Donkey Kongs captive in ... Donkey Kong." << endl;
        cout << "A. Who is Princess Peach?" << endl;
        cout << "B. Who is Princess Daisy?" << endl;
        cout << "C. Who is Pauline?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == gaming_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 500){
        cout << "Up up down down left right left right B A START" << endl;
        cout << "A. What is the Contra code?" << endl;
        cout << "B. What is the Konami code?" << endl;
        cout << "C. What is the Koi code?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";			cin >> answer;
		}
	}
        if(toupper(answer) == gaming_ans.pop()){
            return true;
        }
        else return false;
    }
}

bool NorseMythology(int points){
    LinkedList norsemythology;
    norsemythology.push('A');
    norsemythology.push('C');
    norsemythology.push('B');
    norsemythology.push('A');
    norsemythology.push('B');
    if(points == 100){
        cout << "Commonly believed to be one in the same with Odins Wife Frigga." << endl;
        cout << "A. Who is Lady Sif?" << endl;
        cout << "B. Who is Freya?" << endl;
        cout << "C. Who is Laufay?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == norsemythology.pop()){
            return true;
        }
        else return false;
    }

    if(points == 200){
        cout << "The end of the world according to Norse mythology." << endl;
        cout << "A. What is Ragnarok?" << endl;
        cout << "B. What is Mjolnir?" << endl;
        cout << "C. What is Gungnir?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == norsemythology.pop()){
            return true;
        }
        else return false;
    }
    if(points == 300){
        cout << "The being of whom the Earth is believed to be made." << endl;
        cout << "A. What is Odin?" << endl;
        cout << "B. What is Ymir?" << endl;
        cout << "C. What is Vili?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == norsemythology.pop()){
            return true;
        }
        else return false;
    }
    if(points == 400){
        cout << "Loki shaved his/her/their head(s) as a prank." << endl;
        cout << "A. Who is Thor?" << endl;
        cout << "B. Who are the dwarves?" << endl;
        cout << "C. Who is Sif?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == norsemythology.pop()){
            return true;
        }
        else return false;
    }
    if(points == 500){
        cout << "Thor dressed up as a woman to protect them/him/her/it." << endl;
        cout << "A. Who is Freyja?" << endl;
        cout << "B. What is Thor's hammer?" << endl;
        cout << "C. Who are Thor's children?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == norsemythology.pop()){
            return true;
        }
        else return false;
    }
}

bool AmericanHistory(int points){
    LinkedList history_ans;
    history_ans.push('A');
    history_ans.push('C');
    history_ans.push('C');
    history_ans.push('B');
    history_ans.push('A');
    if(points == 100){
        cout << "Colors of the American Flag" << endl;
        cout << "A. What are Red, White, and Blue?" << endl;
        cout << "B. What are Red and White?" << endl;
        cout << "C. What are Red, Green, and Yellow?" << endl;
        cout << "type answer here: ";
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
    if(points == 200){
        cout << "The era when flour sacks were at the peak of the fashion industry." << endl;
        cout << "A. What is the Civil War?" << endl;
        cout << "B. What is the Dust Bowl?" << endl;
        cout << "C. What is the Great Depression?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'B'){
            return true;
        }
        else return false;
    }
    if(points == 300){
        cout << "Material on which the Delaration of Independence was originally written." << endl;
        cout << "A. What is paper?" << endl;
        cout << "B. What is wood?" << endl;
        cout << "C. What is hemp" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'C'){
            return true;
        }
        else return false;
    }
    if(points == 400){
        cout << "The last time the Liberty Bell was last wrung." << endl;
        cout << "A. When was 2015?" << endl;
        cout << "B. When was 1776?" << endl;
        cout << "C. When was 1846?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'C'){
            return true;
        }
        else return false;
    }
    if(points == 500){
        cout << "America's first ginger president." << endl;
        cout << "A. Who was Thomas Jefferson?" << endl;
        cout << "B. Who was Franklin Roosevelt?" << endl;
        cout << "C. Who was George Washington?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
}

bool Disney(int points){
    LinkedList disney_ans;
    disney_ans.push('B');
    disney_ans.push('A');
    disney_ans.push('C');
    disney_ans.push('C');
    disney_ans.push('A');
    if(points == 100){
        //another sudo question
        cout << "She was trapped in a tower" << endl;
        cout << "A. Who is Fiona?" << endl;
        cout << "B. Who is Rapunzel?" << endl;
        cout << "C. Who is Ariel?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == disney_ans.pop()){
            return true;
        }
        else return false;
    }
        if(points == 200){
        //another sudo question
        cout << "Aladdin's pet monkey" << endl;
        cout << "who is Apu?" << endl;
        cout << "who is Jafar?" << endl;
        cout << "who is Abu?" << endl;//correct
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == disney_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 300){
        //another sudo question
        cout << "In Beauty and the Beast, how many eggs does Gaston eat for breakfast?" << endl;
        cout << "what is a half dozen?" << endl;
        cout << "what is a dozen?" << endl;
        cout << "what is 5 dozen?" << endl;//correct
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == disney_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 400){
        //another sudo question
        cout << "In Mulan, which actor played the voice of Mushu?" << endl;
        cout << "who is Eddie Murphy?" << endl;//correct
        cout << "who is Sean Paul?" << endl;
        cout << "who is Chris Rock?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == disney_ans.pop()){
            return true;
        }
        else return false;
    }
    if(points == 500){
        //another sudo question
        cout << "Which Disney film was the first to use the wide screen Cinema Scope?" << endl;
        cout << "what is the Aristocats?" << endl;
        cout << "what is Lady and the Tramp?" << endl;//correct
        cout << "what is the Lion King?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == disney_ans.pop()){
            return true;
        }
        else return false;
    }
}

bool BowlingTerms(int points){
    LinkedList bowling_ans;
    bowling_ans.push('A');
    bowling_ans.push('C');
    bowling_ans.push('B');
    bowling_ans.push('C');
    bowling_ans.push('A');
	
    if(points == 100){
        cout << "Bowling trash talk." << endl;
        cout << "A. What is balk?" << endl;
        cout << "B. What is balsa?" << endl;
        cout << "C. What is jam?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
    if(points == 200){
        cout << "A bowler's starting position." << endl;
        cout << "A. What is an alley?" << endl;
        cout << "B. What is a curve?" << endl;
        cout << "C. What is an address?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'C'){
            return true;
        }
        else return false;
    }
    if(points == 300){
        //another sudo question
        cout << "An array of pins left standing." << endl;
        cout << "A. What is a honey?" << endl;
        cout << "B. What are grandma's teeth?" << endl;
        cout << "C. What is a line?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'B'){
            return true;
        }
        else return false;
    }
	if(points == 400){
        //another sudo question
        cout << "Five strikes in a row." << endl;
        cout << "A. What is a half-hit?" << endl;
        cout << "B. What is a kegler?" << endl;
        cout << "C. What is a five-bagger?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'C'){
            return true;
        }
        else return false;
    }
    if(points == 500){
        //another sudo question
        cout << "The path taken by a sharp curve ball." << endl;
        cout << "A. What is a scenic route?" << endl;
        cout << "B. What is a curve?" << endl;
        cout << "C. What is a tandem?" << endl;
        char answer;
        cin >> answer;
	if(!isalpha(answer)){
		while(!isalpha(answer)){
			cout << "Invalid Response. Please try again: ";
			cin >> answer;
		}
	}
        if(toupper(answer) == 'A'){
            return true;
        }
        else return false;
    }
}
        
        
