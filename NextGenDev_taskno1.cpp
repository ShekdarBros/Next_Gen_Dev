//#include<iostream>
//#include<ctime>
//using namespace std;
//
//template<typename T>
//void input(T& num);
//
//int main()
//{
//	int num, guess;
//	char c;              //Variables
//	Again:
//	srand(0);
//	guess = rand() % 1000;
//	system("cls");
//	cout << "\nGuess the number : ";
//	input(num); //Called the input function
//	while (num != guess)
//	{
//		if (num < guess)
//			cout << "Too low!\nTry Again ";
//		else if (num > guess)
//			cout << "Too high!\nTry Again ";
//		cout << "\nGuess the number again : ";
//		input(num); //Called the input function
//	}
//	cout << "Congratulation! Want to play another game?  [Y for Yes and N for No]";
//	input(c);
//	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n')
//	{
//		cout << "Wrong Entry!\nEnter Again : ";
//		input(c);
//	}
//	if (c == 'Y' || c == 'y')
//		goto Again;
//	else if (c == 'N' || c == 'n')
//		exit(0);
//}
//
//template<typename T>
//void input(T& num) //A function to prevent cin to go in fail state
//{
//	cin >> num;
//	while (cin.fail())
//	{
//		cin.clear();
//		cin.ignore();
//		cout << "Wrong entry!\nEnter again : ";
//		cin >> num;
//	}
//}