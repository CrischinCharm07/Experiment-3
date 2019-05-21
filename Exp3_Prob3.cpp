#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{

  char a[1000];
  int s;

  cout << "Enter characters: ";
  cout << " " << endl;
  cin >> a;
  
  s = strlen(a);
  cout << " " << endl;
  cout << "Array in reverse order:" << endl;
  for (int n = s;  n >= 0; n--)
	  {
		  cout <<a[n];
	  }
  cout << " " << endl;
  cout << " " << endl;
  cout << "Array size : \n" << s << endl;


	getch ();
	return 0;	
}
