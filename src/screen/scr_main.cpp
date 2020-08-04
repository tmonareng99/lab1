// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
myScreen.set('*' );
  for(auto i=0u; i<5; i++){  
    myScreen.forward();
    myScreen.set('*' );
   }
   myScreen.move(1,4);
   for(auto i=0u;i<5; i++)
    {
      myScreen.down();
       myScreen.set('*');
    }
	myScreen.display();
	cout << endl;



}
//fgvejsndk.;lkgz4.3