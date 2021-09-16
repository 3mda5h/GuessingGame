#include <iostream>

using namespace std;

int main()
{
  srand(time(NULL));
  int randnum;
  int guess = 0;
  int totalguesses;
  string playagain = "y";
  //will keep restarting the game until the player says no
  while (playagain != "n")
    {
      totalguesses = 1;
      randnum = rand() % 101;
      //cout << "The random number is: " << randnum << endl;
      cout << "Guess a random number from 0 to 100" << endl;
      cin >> guess;
      //while the player hasn't guessed the correct number
      while (guess != randnum)
	{
	  //if player guesses too high
	  if (guess > randnum)
	    {
	      totalguesses ++;
	      cout << "Too high, guess again" << endl;
	      cin >> guess;
	    }
	  //if player guesses too low
	  else if (guess < randnum)
	    {
	      totalguesses ++;
	      cout << "Too low, guess again" << endl;
	      cin >> guess;
	    }
	 }
  cout << "You guessed the number! It took " << totalguesses << " tries" << endl;
  cout << "Would you like to play again? (y/n)" << endl;
  cin >> playagain;
    }
}
