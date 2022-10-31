//Trick or Treat Simulator
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <fstream>

using namespace std;

string mTrickOrTreat;
string yTrickOrTreat;
const string trick = "trick";
const string Trick = "Trick";
const string treat = "treat";
const string Treat = "Treat";
const string tt = "trick or treat";
const string TT = "Trick or Treat";
const string tte = "trick or treat!";
const string TTE = "Trick or Treat!";
//char tt [30];

void myTurn() {
  cin >> mTrickOrTreat;
  //cout << trickOrTreat;
  
  if (mTrickOrTreat == trick || mTrickOrTreat == Trick) {
    cout << "Really a trick? I thought we were better than that." << endl;
    } else if (mTrickOrTreat == treat || mTrickOrTreat == Treat) {
        cout << "Ooo a treat! Thank you!" << endl;
        } else {
            cout << "Im sorry I didnt quite catch that." << endl;
            cout << "Please try answering with 'trick' or 'treat':" << endl;
            myTurn();
        }
}

void yourTurn() {
  cout << "Say: 'Trick or Treat!'" << endl;
  cin >> yTrickOrTreat;
  //cin.ignore(1,'\n');
  //cin.getline(tt, 500);
  //getline(cin, tt);
}

int main() {
  cout << "It's Spooky Season!" << endl;
  cout << "Happy Halloween!" << endl;
  cout << "Okay, Ill go first. Trick or Treat!" << endl;
    myTurn();
  cout << "Okay your turn." << endl;
    yourTurn();
    return 0;
}