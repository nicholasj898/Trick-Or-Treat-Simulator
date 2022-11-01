//Trick or Treat Simulator
//Quick Project For Fun
//Art by Delectable System Administrator and JGS on ascii.co.uk (https://ascii.co.uk/art/pumpkin, https://ascii.co.uk/art/candy)
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

string mTrickOrTreat;
char yTrickOrTreat [30];
const string trick = "trick";
const string Trick = "Trick";
const string treat = "treat";
const string Treat = "Treat";
const string tt = "trick or treat";
const string TT = "Trick or Treat";
const string tte = "trick or treat!";
const string TTE = "Trick or Treat!";

void myTurn() {
  cin >> mTrickOrTreat;
  //cout << trickOrTreat;
  
  if (mTrickOrTreat == trick || mTrickOrTreat == Trick) {
    cout << "Really a trick? I thought we were better than that." << endl;
    } else if (mTrickOrTreat == treat || mTrickOrTreat == Treat) {
        cout << "Ooo a treat! Thank you!" << endl;
        } else {
            cout << "... What?" << endl;
            cout << "Please try answering with 'trick' or 'treat'" << endl;
            myTurn();
        }
}

void yourTurn() {
  cout << "Say: 'Trick or Treat!'" << endl;
  //cin.ignore(1,'\n');
  //cin >> tt;
  cin.getline(yTrickOrTreat, 500);
  cin.getline(yTrickOrTreat, 500);
  //cout << yTrickOrTreat <<endl;
    
    
  if (yTrickOrTreat == tt || yTrickOrTreat == TT || yTrickOrTreat == tte || yTrickOrTreat == TTE) {
    //cout << "Really a trick? I thought we were better than that." << endl;
    srand( (unsigned)time( NULL ) );
    if ((rand()/32768.0)*100.0<100) {

cout << "Trick!" << endl;
cout << endl;
cout <<R"(               .,'
                       .''.'
                      .' .'
           .    ' . ~,'  `.~ . `    .
      . '  .  '   .`:_. . _:'.   `  .  ` .
    .'   .'     ,     .'^'.    .     `.   `.
   .    .       .A.  .     . .A.       .    .
              .d000b.      .d000b.
  '    '    .d0000000b.  .d0000000b.    `    `
  .    .      .      . db  .     .      .    .
                      d00b
   `    `?0o.  `     `     '    '  .o0P'    '
     .    `?00   ooooo.  .ooooo   00P' .   .
      ` .   `?00000P ?0bd0P ?00000P' .' . '
            . . `~~   ~~~~  .~~'  . .
                ~     - ~~ -    ~)" << endl;    //Art by Delectable System Administrator

} else {

cout << "Treat!" << endl;

cout << endl;
cout <<R"(
___      .-""-.      ___
\  "-.  /      \  .-"  /
 > -=.\/        \/.=- <
 > -='/\        /\'=- <
/__.-'  \      /  '-.__\
         '-..-')" << endl;                      //Art by JGS
}
    } else {
        cout << "No no, you're doing it wrong." << endl;
        yourTurn();
    }
}

int main() {
  cout << "It's Spooky Season!" << endl;
  cout << "Happy Halloween!" << endl;
  cout << "Okay, Ill go first. Trick or Treat!" << endl;
    myTurn();
  cout << "Okay your turn." << endl;
    yourTurn();
    cout << "Thanks for playing!" << endl;
    return 0;
}