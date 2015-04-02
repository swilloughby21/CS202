#include <string>
#include <fstream>
#include <iostream>
#include "8protos.h"
#include <cstdlib>

using namespace std;

// card class

card::card()
{
	rank = "rank";
	suit ="suit";
	location = "location";
	numRank = 0;
}

card::card(const card& c)
{
	rank.assign(c.rank);
	suit.assign(c.suit);
	location.assign(c.location);
	numRank = c.numRank;
}

card::~card()
{
	rank = "rank";
	suit ="suit";
	location = "location";
	numRank = 0;
	
}

card& card::operator=(const card& c)
{
	// check to make sure its not the same card
	
	if(this != &c)
	{
		// set new vals for card 
		
	rank.assign(c.rank);
	suit.assign(c.suit);
	location.assign(c.location);
	numRank = c.numRank;
	
	}

  return *this;
	
}

bool card::operator>(const card& c)
{
  if(numRank > c.numRank)
  {
	return false;
  }

  else
   {
	return true;
   }
}

bool operator<(const card& c1, const card& c2)
{
     if(c1.numRank < c2.numRank)
  {
	return false;
  }

  else
   {
	return true;
   }
	
}

ostream& operator<<(ostream& cout, card& c)
{
  // output info

  cout << c.suit << " " << c.rank << " " <<c.location << endl;

	return cout;
}
 

void card::setLocation(string a)
{
  //set location

  location = a;

}

string card::getLocation()
{

 return location;
}

void shuffleDeck(card deck, card newDeck)
{
  int spot;
  int count = 0;
  string loc;

  for(int i = 0; count < 52; i++)
  {
	spot = rand()% 52;

	// check to see if that card has been used

	loc = deck.getLocation(); 

	if(loc == "unshuffled")
	{

	// set card to assigned spot

	  newDeck = deck;

	// change location to shuffled
	  
	  deck.setLocation("shuffled");

	// increase count

	  
	}
count++;
  
  }

}

ifstream& operator>>(ifstream& fin, card& c)
{
  // readin info

  fin >> c.suit >> c. rank;
  
  // maybe if statements

  if(c.rank == "two")
  {
	c.numRank = 2;
  }
  else if(c.rank == "three")
  {
	c.numRank = 3;
  }
  else if(c.rank == "four")
  {
	c.numRank = 4;
  }
  else if(c.rank == "five")
  {
	c.numRank = 5;
  }
  else if(c.rank == "six")
  {
	c.numRank = 6;
  }
    else if(c.rank == "seven")
  {
	c.numRank = 7;
  }
    else if(c.rank == "eight")
  {
	c.numRank = 8;
  }
    else if(c.rank == "nine")
  {
	c.numRank = 9;
  }

    else if(c.rank == "ten")
  {
	c.numRank = 10;
  }

    else if(c.rank == "jack")
  {
	c.numRank = 11;
  }
    else if(c.rank == "queen")
  {
	c.numRank = 12;
  }
    else if(c.rank == "king")
  {
	c.numRank = 13;
  }
    else if(c.rank == "ace")
  {
	c.numRank = 14;
  }


  return fin;

}

// player class

player::player()
{
	hand = new card[5];
	name = "first last";
	bet = 0.0;

}

player::~player()
{
	delete [] hand;
	name = "first last";
	bet = 0.0;
	
}

ostream& operator<<(ostream& cout , player& p)
{
  // output player info

  cout << p.name << " " << p.bet << endl;

  for(int i = 0; i < 5; i++)
  {
	cout << p.hand[i] << endl;
  }

return cout;
	
}

ifstream& operator>>(ifstream& fin, player& p)
{
  string tmp;

  fin >> tmp;
  p.name = tmp;
  p.name += " ";
  fin >> tmp;
  p.name += tmp;

return fin;
}



