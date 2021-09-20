#include <iostream>
#include <cstring>
#include <cctype>
#include <ctype.h>

using namespace std;

int main()
{
  char input[80];
  char modifiedinput[80];

  cin.get(input, 80);
  cin.get();
  //cout << input << endl;

  int count = 0;
  for (int i = 0; i < 80; i++)
    {
      if(isalpha(input[i])) //if letter
	{
	  char temp[1] = tolower(input[i]);
	  strcpy(temp,
	  count++;
	}
    }
  modifiedinput[count] = '\0';
  cout << modifiedinput << endl;
}
