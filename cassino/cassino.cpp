#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;


int main()
{
	





	srand(time(0));

	int randomNum;
	int playersNum;
	char  hinddencommand;
	int account = 0;

	do {
		randomNum = rand() % 11;
		cout << "Your current account balence: " << account << endl;

		cout << "Guess the  up comming number: ";
		cin >> playersNum;

		if (randomNum == playersNum) {

			cout << "Congratulations! You guessed the right number..." << endl;
			account = ++account;
			cout << account << endl;
		}
		else
		{
			cout << "better luck next time...." << endl;
			cout << "your accout balence is: " << account << endl;
			cin >> hinddencommand;
		}

	} while (hinddencommand == 'r' || hinddencommand == 'r');





}

