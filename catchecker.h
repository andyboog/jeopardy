#include <iostream>

using namespace std;
bool G100 = false;
bool G200 = false;
bool G300 = false;
bool G400 = false;
bool G500 = false;
bool G600 = false;
bool N100 = false;
bool N200 = false;
bool N300 = false;
bool N400 = false;
bool N500 = false;
bool N600 = false;
bool A100 = false;
bool A200 = false;
bool A300 = false;
bool A400 = false;
bool A500 = false;
bool A600 = false;
bool J100 = false;
bool J200 = false;
bool J300 = false;
bool J400 = false;
bool J500 = false;
bool J600 = false;
bool D100 = false;
bool D200 = false;
bool D300 = false;
bool D400 = false;
bool D500 = false;
bool D600 = false;
bool B100 = false;
bool B200 = false;
bool B300 = false;
bool B400 = false;
bool B500 = false;
bool B600 = false;
bool checker(string x, int points) {
	if (x == "GAMING") {
		if (points == 100) {
			if (G100 == false) {
				G100 = true;
				return (!G100);
			} else return G100;
		}
		if (points == 200) {
			if (G200 == false) {
				G200 = true;
				return (!G200);
			} else return G200;
		}
		if (points == 300) {
			if (G300 == false) {
				G300 = true;
				return (!G300);
			} else return G300;
		}
		if (points == 400) {
			if (G400 == false) {
				G400 = true;
				return (!G400);
			} else return G400;
		}
		if (points == 500) {
			if (G500 == false) {
				G500 = true;
				return (!G500);
			} else return G500;
		}
		if (points == 600) {
			if (G600 == false) {
				G600 = true;
				return (!G600);
			} else return G600;
		}
	} else if (x == "NORSE MYTHOLOGY") {
		if (points == 100) {
			if (N100 == false) {
				N100 = true;
				return (!N100);
			} else return N100;
		}
		if (points == 200) {
			if (N200 == false) {
				N200 = true;
				return (!N200);
			} else return N200;
		}
		if (points == 300) {
			if (N300 == false) {
				N300 = true;
				return (!N300);
			} else return N300;
		}
		if (points == 400) {
			if (N400 == false) {
				N400 = true;
				return (!N400);
			} else return N400;
		}
		if (points == 500) {
			if (N500 == false) {
				N500 = true;
				return (!N500);
			} else return N500;
		}
		if (points == 600) {
			if (N600 == false) {
				N600 = true;
				return (!N600);
			} else return N600;
		}
	} else if (x == "AMERICAN HISTORY") {
		if (points == 100) {
			if (A100 == false) {
				A100 = true;
				return (!A100);
			} else return A100;
		}
		if (points == 200) {
			if (A200 == false) {
				A200 = true;
				return (!A200);
			} else return A200;
		}
		if (points == 300) {
			if (A300 == false) {
				A300 = true;
				return (!A300);
			} else return A300;
		}
		if (points == 400) {
			if (A400 == false) {
				A400 = true;
				return (!A400);
			} else return A400;
		}
		if (points == 500) {
			if (A500 == false) {
				A500 = true;
				return (!A500);
			} else return A500;
		}
		if (points == 600) {
			if (A600 == false) {
				A600 = true;
				return (!A600);
			} else return A600;
		}
	} else if (x == "JEOPARDY") {
		if (points == 100) {
			if (J100  == false) {
				J100  = true;
				return (!J100 );
			} else return J100 ;
		}
		if (points == 200) {
			if (J200 == false) {
				J200 = true;
				return (!J200);
			} else return J200;
		}
		if (points == 300) {
			if (J300 == false) {
				J300 = true;
				return (!J300);
			} else return J300;
		}
		if (points == 400) {
			if (J400 == false) {
				J400 = true;
				return (!J400);
			} else return J400;
		}
		if (points == 500) {
			if (J500 == false) {
				J500 = true;
				return (!J500);
			} else return J500;
		}
		if (points == 600) {
			if (J600 == false) {
				J600 = true;
				return (!J600);
			} else return J600;
		}
	} else if (x == "DISNEY") {
		if (points == 100) {
			if (D100 == false) {
				D100 = true;
				return (!D100);
			} else return D100;
		}
		if (points == 200) {
			if (D200 == false) {
				D200 = true;
				return (!D200);
			} else return D200;
		}
		if (points == 300) {
			if (D300 == false) {
				D300 = true;
				return (!D300);
			} else return D300;
		}
		if (points == 400) {
			if (D400 == false) {
				D400 = true;
				return (!D400);
			} else return D400;
		}
		if (points == 500) {
			if (D500 == false) {
				D500 = true;
				return (!D500);
			} else return D500;
		}
		if (points == 600) {
			if (D600 == false) {
				D600 = true;
				return (!D600);
			} else return D600;
		}
	} else if (x == "BOWLING TERMS") {
		if (points == 100) {
			if (B100 == false) {
				B100 = true;
				return (!B100);
			} else return B100;
		}
		if (points == 200) {
			if (B200 == false) {
				B200 = true;
				return (!B200);
			} else return B200;
		}
		if (points == 300) {
			if (B300 == false) {
				B300 = true;
				return (!B300);
			} else return B300;
		}
		if (points == 400) {
			if (B400 == false) {
				B400 = true;
				return (!B400);
			} else return B400;
		}
		if (points == 500) {
			if (B500 == false) {
				B500 = true;
				return (!B500);
			} else return B500;
		}
		if (points == 600) {
			if (B600 == false) {
				B600 = true;
				return (!B600);
			} else return B600;
		}
	}else return false;
}
