#include <iostream>
#include <string>
#include <fstream>
#include "8protos.h"
#include <cstdlib>

using namespace std;


int main()
{

  ifstream fin;
  int numPlayers;
  int input;
  bool running = true;
  player *group;
  card *unshuffled = new card [52];
  card *shuffled = new card [52];
  card *discard;
  
  

  
   // ask how many users
 
   cout << "How many players (2-8) : ";
   cin >> numPlayers; 
   cout << endl;
  
  group = new player[numPlayers];

  // open files
  
  fin.open("players");
  
	for(int i = 0; i < numPlayers; i ++)
	{
		fin >> group[i];
		
	}
  
  fin.close();
  
  
    fin.open("cards");

 
    for(int a = 0; a < 52; a++)
    {
	fin >> unshuffled[a];

    }
    
    fin.close();
  
  
  //show menu

	do
	{
			// show options
			
		cout << "   Menu" << endl << endl;
		cout << "1. Shuffle" << endl;
		cout << "2. Print Suffled Deck" << endl;
		cout << "3. Print Unshuffled Deck" << endl;
		cout << "4. Print Player Info" << endl;
		cout << "5. Quit" << endl;

		cout << "Enter Selection: ";
		cin >> input;
		
		switch(input)
		{
			case 1:
			
			// shuffle deck

			shuffleDeck(*unshuffled, *shuffled);
			
			break;

			case 2:
			
			// print shuffled

			for(int c = 0; c < 52; c++)
			{

			  cout << shuffled[c];

			}
			
			break;

			case 3:
			
			// print unshuffled
			
			for(int b = 0; b < 52; b++)
			{

			  unshuffled[b].setLocation("unshuffled");

			}

			 for(int a = 0; a < 52; a++)
   			 {
			    cout << unshuffled[a];
    			 }
			
			break;

			case 4:
			
			// print player info
			
			for(int i = 0; i < numPlayers; i ++)
			{
				cout << group[i];
		
			}

			break;

			case 5:
			
			  running = false;
			  
			break;
			
		}
		
		
	}while(running == true);
		
		
		

	
  // show that other functions not used work

	if(operator<(unshuffled[1], unshuffled[2]))
	{
	  cout << unshuffled[1] << " is less than " << unshuffled[2] << endl;
	}

	if(unshuffled[1].operator>(unshuffled[2]))
	{
	  cout << unshuffled[2] << " is greater than " << unshuffled[1] << endl;
	}

  delete[] shuffled;
  delete[] unshuffled; 
  delete[] group;

  return 0;
}




