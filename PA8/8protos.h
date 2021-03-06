#include <string>
#include <fstream>
#include <iostream>

using namespace std;


class card
{
  public:
	
	card();
	card(const card&);
	~card();
	card& operator=(const card&);
	bool operator>(const card&);
        void setLocation( string);
	string getLocation();


    friend bool operator<(const card&, const card&);
    friend ostream& operator<<(ostream&, card&);
    friend ifstream& operator>>(ifstream&, card&);

  private:

	string suit;
	string rank;
	string location;
	int numRank;
	
};

class player
{
  public:

	player();
	~player();

    friend ostream& operator<<(ostream&, player&);
    friend ifstream& operator>>(ifstream&, player&);

  private:
  
	string name;
	card *hand;
	double bet;
};

void shuffleDeck(card, card);



