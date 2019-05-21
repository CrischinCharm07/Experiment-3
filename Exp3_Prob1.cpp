#include <iostream>
#include <iomanip>
#include <conio.h>
 using namespace std;
 int main()
 {
	 float arr [10];
	 int n, x;
	 float y, z, total;

	 cout << "Enter an array of 10 elements:" << endl;
	  for (n = 0;  n < 10; n++)
	  {
		  cin >> arr [n] >> setprecision (2) >> fixed;
	  }

	  for (n = 0; n < 10; n++)
	  {
		  for (x = n + 1; x < 10; x++)
		  {
			  for (n = 1; n < 10; ++n)
			  {
			  if (arr [n] > arr [x])
			  {
				  y = arr [n];
				  arr [n] = arr [x];
				  arr [x] = y;
			  }
			  
			  }
		  }
	  }
	  
	  z = arr [0];
	  total = 0;
	  for (n = 0; n < 10; n++)
	  {
		  if (z > arr [n])
			  z = arr [n];
			 total += arr [n];
	  }
	  cout << " " << endl;

	  cout << "The smallest integer is " << z << "\n" << endl;

	  cout << "The largest integer is " << y << ".\n" << endl;

	  cout << "The total of the elements is " << total << ".\n" << endl;

	  cout << "The average of the array is " << total/10 << "." << endl;
	 

 getch ();
	 return 0;
 }