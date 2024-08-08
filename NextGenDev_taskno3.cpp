#include<iostream>
using namespace std;
template<typename T>
void input(T& num) //A function to prevent cin to go in fail state
{
	cin >> num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Wrong entry!\nEnter again : ";
		cin >> num;
	}
}
int logic(char a[3][3], int row, int col, char ch);
void Display(char a[3][3]);

int main()
{
	Menu:
	int choice;
	cout << "-------------------------------------\n";
	cout << "          Tic Tac Toe Game\n";
	cout << "1. Play Game\n2. Exit Game\n";
	input(choice);
	while (choice != 1 && choice != 2)
	{
		cout << "Wrong Entry!\nInput again : ";
		input(choice);
	}
	if (choice == 2)
		exit(0);
	else
	{
		char table[3][3], turn;
		int result = -1, r, c;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				table[i][j] = ' ';
			}
		}
		while (1)
		{
			system("cls");
			Display(table);
			cout << "Player1 Turn : \n";
			cout << "Row : ";
			input(r);
			cout << "column : ";
			input(c);
			while (table[r - 1][c - 1] != ' ')
			{
				cout << "Invalid Turn  Input again \n";
				cout << "Row : ";
				input(r);
				cout << "column : ";
				input(c);
			}
			table[r - 1][c - 1] = 'X';
			turn = 'X';
			result = logic(table, r - 1, c - 1, 'X');
			if (result == 1 || result == 0)
				break;
			system("cls");
			//Player 2 turn
			Display(table);
			cout << "Player2 Turn : \n";
			cout << "Row : ";
			input(r);
			cout << "column : ";
			input(c);
			while (table[r - 1][c - 1] != ' ')
			{
				cout << "Invalid Turn!  Input again\n";
				cout << "Row : ";
				input(r);
				cout << "column : ";
				input(c);
			}
			table[r - 1][c - 1] = 'O';
			turn = 'O';
			result = logic(table, r - 1, c - 1, 'O');
			if (result == 1 || result == 0)
				break;
		}
		if (result == 1)
		{
			if (turn == 'X')
				cout << "Player 1 won!\n";
			else
				cout << "Player 2 won!\n";
		}
		else if(result == 0)
			cout << "Game Draw!\n";
		goto Menu;
	}
}

int logic(char a[3][3] ,int row, int col, char ch)
{
	if (row == 0)
	{
		if (a[row + 1][col] == ch && a[row + 2][col] == ch)
			return 1;
		if (col == 0)
		{
			if (a[row][col + 1] == ch && a[row][col + 2] == ch)
				return 1;
			if (a[row + 1][col + 1] == ch && a[row + 2][col + 2] == ch)
				return 1;
		}
		else if (col == 1)
		{
			if (a[row][col + 1] == ch && a[row][col - 1] == ch)
				return 1;
		}
		else if (col == 2)
		{
			if (a[row][col - 1] == ch && a[row][col - 2] == ch)
				return 1;
			if (a[row + 1][col - 1] == ch && a[row + 2][col - 2] == ch)
				return 1;
		}
	}
	if (row == 1)
	{
		if (col == 0)
		{
			if (a[row][col + 1] == ch && a[row][col + 2] == ch)
				return 1;
			if (a[row + 1][col] == ch && a[row - 1][col] == ch)
				return 1;
		}
		else if (col == 1)
		{
			if (a[row][col + 1] == ch && a[row][col - 1] == ch)
				return 1;
			if (a[row + 1][col] == ch && a[row - 1][col] == ch)
				return 1;
			if (a[row + 1][col + 1] == ch && a[row - 1][col - 1] == ch)
				return 1;
			if (a[row - 1][col + 1] == ch && a[row + 1][col - 1] == ch)
				return 1;
		}
		else if (col == 2)
		{
			if (a[row][col - 1] == ch && a[row][col - 2] == ch)
				return 1;
			if (a[row + 1][col] == ch && a[row - 1][col] == ch)
				return 1;
		}
	}
	if (row == 2)
	{
		if (a[row - 1][col] == ch && a[row - 2][col] == ch)
			return 1;
		if (col == 0)
		{
			if (a[row][col + 1] == ch && a[row][col + 2] == ch)
				return 1;
			if (a[row - 1][col + 1] == ch && a[row - 2][col + 2] == ch)
				return 1;
		}
		else if (col == 1)
		{
			if (a[row][col + 1] == ch && a[row][col - 1] == ch)
				return 1;
		}
		else if (col == 2)
		{
			if (a[row][col - 1] == ch && a[row][col - 2] == ch)
				return 1;
			if (a[row - 1][col - 1] == ch && a[row - 2][col - 2] == ch)
				return 1;
		}
	}
	bool flag = false;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] == ' ')
			{
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}
	}
	if (flag == true)
	{
		cout << "\nThis Game is draw Well-Played Both Players!\n";
		return 0;
	}
		return -1;
}

void Display(char grid[3][3]) 
{
	cout << "     1   2   3\n";
	cout << "   -------------\n";
	for (int i = 0; i < 3; i++) 
	{
		cout << i + 1 << "  | ";
		for (int j = 0; j < 3; j++) 
		{
			cout << grid[i][j] << " | ";
		}
		cout << "\n   -------------\n";
	}
}