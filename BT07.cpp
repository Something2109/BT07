#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//Bai A1
/*int* sum(int a, int b) {
	int c = a + b;
	relastTurn &c;
}

int main() {
	int* pX;
	cout << pX << ' ' << *pX << endl;
	pX = NULL;
	cout << pX << ' ' << *pX << endl;
	int a = 2, b = 3;
	cout << *sum(a, b) << endl;
	char* pChar = (char*)pX;
}*/

//Bai A2
/*int sizeOfArr(int arr[]) {
	relastTurn sizeof(arr);
}

int sizeOfArrInFunc(int arr[], int n) {
	int size = 0;
	for (int i = 0; i < n; i++) {
		size += sizeof(arr[i]);
	}
	relastTurn size;
}

int main() {
	const int n = 5;
	int arr[n];
	cout << "In main: " << sizeof(arr) << endl;
	cout << "In function without element's number: " << sizeOfArr(arr) << endl;
	cout << "In function with element's number: " << sizeOfArrInFunc(arr, n) << endl;
}*/

//Bai A3
/*int count_even(int* arr, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(arr + i) % 2 == 0) {
			count++;
		}
	}
	relastTurn count;
}
int main() {
	srand(time(NULL));
	const int n = 10;
	int arr[10];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (i + 10);
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << count_even(&arr[0], 5) << endl;
	cout << count_even(&arr[n - 6], 5) << endl;
}*/

//Bai A4
/*int find(int* arr, int n, int x) {
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (high + low) / 2;
		if (*(arr + mid) == x) {
			relastTurn mid + 1;
		}
		if (*(arr + mid) > x) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	relastTurn -1;
}

int main() {
	srand(time(NULL));
	const int n = 20;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
	int x;
	cin >> x;
	int xPlace = find(&arr[0], n, x);
	if (xPlace < 1) {
		cout << "not find" << endl;
	}
	else {
		cout << xPlace << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
}*/

//Bai A5
/*char* weird_string() {
	char c[] = "12345";
	relastTurn c;
}

int main() {
	char* c = weird_string();
	cout << c;
}*/


//Bai A6
/*int main(int argc, const char* argv[]) {
	cout << "Number of command-line arguments: " << argc << endl;
	int xMineField = atoi(argv[1]);
	int yMineField = atoi(argv[2]);
	int mineNumber = atoi(argv[3]);
	cout << xMineField << ' ' << yMineField << ' ' << mineNumber;
	relastTurn 0;
}*/


//Bai A7
/*int compareCount(const char* longStr, const char* shortStr) {
	int count = 0;
	for (int i = 0; i < strlen(longStr); i++) {
		if (longStr[i] == shortStr[0]) {
			if (strcmp(longStr, shortStr) >= 0) {
				count++;
			}
		}
	}
	relastTurn count;
}

int main(int argc, const char* argv[]) {
	//const char* a = argv[1];
	//const char* b = argv[2];
	const char* a = "Helloiashhafoihillo";
	const char* b = "llo";
 	cout << a << ' ' << b << ' ' << strcmp(a, b) << endl;
	cout << compareCount(a, b);
}*/

//Bai C1
/*int rollTheDice() {
	return rand() % 6 + 1;
}

int main() {
	srand(time(NULL));
	int firstPlScore = 0, secondPlScore = 0, lastTurn = 2;
	while (firstPlScore < 100 && secondPlScore < 100) {
		int roll = rollTheDice();
		if (firstPlScore < secondPlScore || (firstPlScore == secondPlScore && lastTurn == 2)) {
			if (firstPlScore + roll <= 100) {
				firstPlScore += roll;
			}
			lastTurn = 1;
		}
		else {
			if (secondPlScore + roll <= 100) {
				secondPlScore += roll;
			}
			lastTurn = 2;
		}
		cout << ((lastTurn == 1) ? "First" : "Second") << " player roll: " << roll << endl;
		cout << setw(23) << "First player's score: " << firstPlScore << endl;
		cout << setw(23) << "Second player's score: " << secondPlScore << endl;
		cout << endl;
	}
	if (firstPlScore == 100) {
		cout << "First player win!";
	}
	else {
		cout << "Second player win!";
	}
}*/

//Bai C2
/*int turtleStep() {
	int move = 0;
	int randNumb = rand() % 10;
	switch (randNumb) {
	case 0: case 1: case 2: case 3: case 4: {
		cout << "The turtle sprints 3 steps" << endl;
		move = 3;
		break;
	}
	case 5: case 6: case 7: {
		cout << "The turtle takes 1 step" << endl;
		move = 1;
		break;
	}
	case 8: case 9: {
		cout << "The turtle slips 6 steps" << endl;
		move = -6;
		break;
	}
	}
	return move;
}

int rabbitStep() {
	int move = 0;
	int randNumb = rand() % 10;
	switch (randNumb) {
	case 0: case 1: {
		cout << "The rabbit falls asleep" << endl;
		move = 0;
		break;
	}
	case 2: case 3:  {
		cout << "The rabbit sprints 9 steps" << endl;
		move = 9;
		break;
	}
	case 4: {
		cout << "The rabbit slips 12 steps" << endl;
		move = -12;
		break;
	}
	case 5: case 6: case 7: {
		cout << "The rabbit takes 1 step" << endl;
		move = 1;
		break;
	}
	case 8: case 9: {
		cout << "The rabbit slips 2 steps" << endl;
		move = -2;
		break;
	}
	}
	return move;
}

void createSlope(int *step) {
	for (int i = 0; i < 70; i++) {
		step [i] = i;
	}
}

void run(int& pos, int (*step)()) {
	pos += step();
	if (pos < 0) {
		pos = 0;
	}
	if (pos > 70) {
		pos = 70;
	}
}

void printScreen(int& rabbitPos, int& turtlePos, int *step) {
	cout << "Finish: " << ((rabbitPos >= 70) ? "Rabbit" : " ") << ((turtlePos >= 70) ? "Turtle" : " ") << endl;
	for (int i = 70 - 1; i > 0; i--) {
		int count = 0;
		while (count < 10 && i >= 0) {
			cout << setw(5) << step[i] << ": " << ((rabbitPos == step[i]) ? "R" : " ") << ' ' << ((turtlePos == step[i]) ? "T" : " ");
			i--;
			count++;
		}
		i++;
		cout << endl;
	}
	cout << "Start: " << ((rabbitPos == 0) ? "R" : " ") << ((turtlePos == 0) ? " T" : " ") << endl;
	cout << endl;
}

int main() {
	srand(time(NULL));
	int step[70];
	createSlope(&step[0]);
	int turtlePos = 0, rabbitPos = 0;
	printScreen(rabbitPos, turtlePos, step);
	while (turtlePos < 70 && rabbitPos < 70) {
		string a;
		cin >> a;
		run(rabbitPos, rabbitStep);
		run(turtlePos, turtleStep);
		printScreen(rabbitPos, turtlePos, step);
	}
	if (rabbitPos == 70) {
		cout << "The rabbit won!" << endl;
	}
	else {
		cout << "The turtle won!" << endl;
	}
}*/

//Bai C3
string printCard(int khoa) {
	string card;
	switch (khoa % 13) {
		case 12: {
			card = "Ace of ";
			break;
		}
		case 11: {
			card = "King of ";
			break;
		}
		case 10: {
			card = "Queen of ";
			break;
		}
		case 9: {
			card = "Jack of ";
			break;
		}
		default: {
			card = to_string(khoa % 13 + 2) + " of ";
		}
	}
	switch (khoa / 13) {
	case 0: {
		card += "Spades";
		break;
	}
	case 1: {
		card += "Clubs";
		break;
	}
	case 2: {
		card += "Diamonds";
		break;
	}
	case 3: {
		card += "Hearts";
		break;
	}
	}
	return card;
}

bool uuTienHon(int khoa1, int khoa2) {
	if (khoa1 > khoa2) {
		return true;
	}
	return false;
}

void shuffle(int* deck) {
	bool shuffledCard[52];
	for (int i = 0; i < 52; i++) {
		shuffledCard[i] = false;
	}
	for (int i = 0; i < 52; i++) {
		int card;
		do {
			card = rand() % 52;
			*(deck + i) = card;
		} while (shuffledCard[card] == true);
		shuffledCard[card] = true;
		cout << card << ' ';
	}
}

void chiaBai(int* deck, int** playerDeck) {
	for (int i = 0; i < 52; i++) {
		playerDeck[i % 4][i / 4] = deck[i];
	}
}

void printPlayerDeck(int* playerDeck) {
	for (int i = 0; i < 13; i++) {
		cout << (i + 1) << ". " << playerDeck[i] << endl;
	}
}

int aiCo2Bich(int** playerDeck) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (playerDeck[i][j] == 0) {
				return i;
			}
		}
	}
}

int chooseCard(int* playerDeck) {
	for (int i = 0; i < 13; i++) {
		if (playerDeck[i] == 0) {
			return i;
		}
	}
}

int main() {
	srand(time(NULL));
	int* deck = new int[52];
	int** playerDeck = new int*[4];
	for (int i = 0; i < 4; i++) {
		*(playerDeck + i) = new int[13];
	}
	shuffle(deck);
	cout << endl;
	chiaBai(deck, playerDeck);
	for (int i = 0; i < 4; i++) {
		cout << "PLayer " << (i + 1) << ":" << endl;
		printPlayerDeck(playerDeck[i]);
		cout << endl;
	}
	cout << endl << aiCo2Bich(playerDeck);
}
