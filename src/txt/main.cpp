#include <iostream>
#include "Menu.h"
#include "txtGame.h"
#include "WinTxt.h"

using namespace std;


int main(void)
{ 
  Menu mn;
  mn.afficher();
  unsigned int m;
  std::cout << "Que voulez vous faire? indiquer le chiffre correspondant" << endl;
  std::cin >> m;
  mn.action(m);
  return 0;
}
