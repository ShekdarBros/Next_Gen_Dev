//#include<iostream>
//#include<cmath>
//using namespace std;
//
//template<typename T>
//void input(T& num) //A function to prevent cin to go in fail state
//{
//	cin >> num;
//	while (cin.fail())
//	{
//		cin.clear();
//		cin.ignore(1000, '\n');
//		cout << "Wrong entry!\nEnter again : ";
//		cin >> num;
//	}
//}
//
//int main()
//{
//	float a, b;
//	int choice;
//	Menu:
//	system("cls");
//	cout << "-------------------------------------\n";
//	cout << "          Simple Calculator\n";
//	cout << "1. Enter two numbers\n2. Exit Program\n";
//	input(choice);
//	while (choice != 1 && choice != 2)
//	{
//		cout << "Wrong Entry!\nInput again : ";
//		input(choice);
//	}
//	if (choice == 1)
//	{
//		cout << "Enter two numbers : ";
//		input(a);
//		input(b);
//		cout << "       --------Menu------ \n";
//		cout << "Select Operation you want to perform with these two numbers : \n";
//		cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
//		input(choice);
//		while (choice < 1 && choice > 4)
//		{
//			cout << "Invalid Operation!\n Choose again : \n";
//			input(choice);
//		}
//		switch (choice)
//		{
//		case 1:
//			cout << a << "+" << b << " : " << a + b << endl;
//			break;
//		case 2:
//			cout << a << "-" << b << " : " << a - b << endl;
//			break;
//		case 3:
//			cout << a << "*" << b << " : " << a * b << endl;
//			break;
//		case 4:
//			cout << a << "//" << b << " : " << a / b << endl;
//			break;
//		}
//		system("pause");
//		goto Menu;
//	}
//	else
//		exit(0);
//	system("pause");
//}
