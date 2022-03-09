#include <iostream>
using namespace std;

char m[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';

void Draw() {
	system("cls");
	cout << "Tic Tac Toe version 1.0" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m[i][j]<<" ";
		}
		cout << endl;
	}
}

void Input() {
	int a;
	cout << "Introduce the number of the field: ";
	cin >> a;
	if (a == 1) {
		m[0][0] = player;
	}
	else if (a == 2) {
		m[0][1] = player;
	}
	else if (a == 3) {
		m[0][2] = player;
	}
	else if (a == 4) {
		m[1][0] = player;
	}
	else if (a == 5) {
		m[1][1] = player;
	}
	else if (a == 6) {
		m[1][2] = player;
	}
	else if (a == 7) {
		m[2][0] = player;
	}
	else if (a == 8) {
		m[2][1] = player;
	}
	else if (a == 9) {
		m[2][2] = player;
	}

}

char Winner() {
	//player X
	if (m[0][0] == 'X' && m[0][1] == 'X' && m[0][2] == 'X')
		return 'X';
	if (m[1][0] == 'X' && m[1][1] == 'X' && m[1][2] == 'X')
		return 'X';
	if (m[2][0] == 'X' && m[2][1] == 'X' && m[2][2] == 'X')
		return 'X';
	if (m[0][0] == 'X' && m[1][0] == 'X' && m[2][0] == 'X')
		return 'X';
	if (m[0][1] == 'X' && m[1][1] == 'X' && m[2][1] == 'X')
		return 'X';
	if (m[0][2] == 'X' && m[0][2] == 'X' && m[0][2] == 'X')
		return 'X';
	if (m[0][0] == 'X' && m[1][1] == 'X' && m[2][2] == 'X')
		return 'X';
	if (m[0][2] == 'X' && m[1][1] == 'X' && m[2][0] == 'X')
		return 'X';

	//player O
	if (m[0][0] == 'O' && m[0][1] == 'O' && m[0][2] == 'O')
		return 'O';
	if (m[1][0] == 'O' && m[1][1] == 'O' && m[1][2] == 'O')
		return 'O';
	if (m[2][0] == 'O' && m[2][1] == 'O' && m[2][2] == 'O')
		return 'O';
	if (m[0][0] == 'O' && m[1][0] == 'O' && m[2][0] == 'O')
		return 'O';
	if (m[0][1] == 'O' && m[1][1] == 'O' && m[2][1] == 'O')
		return 'O';
	if (m[0][2] == 'O' && m[0][2] == 'O' && m[0][2] == 'O')
		return 'O';
	if (m[0][0] == 'O' && m[1][1] == 'O' && m[2][2] == 'O')
		return 'O';
	if (m[0][2] == 'O' && m[1][1] == 'O' && m[2][0] == 'O')
		return 'O';

	return '/';
}

void ChangePlayer() {
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

int main() {
	Draw();
	while (1) {
		Input();
		Draw();
		if (Winner() == 'X') {
			cout << "The winner is 'X'";
			break;
		}
		else if (Winner() == 'X') {
			cout << "The winner is 'O'";
			break;
		}
		ChangePlayer();
	}
	system("pause");

	return 0;
}