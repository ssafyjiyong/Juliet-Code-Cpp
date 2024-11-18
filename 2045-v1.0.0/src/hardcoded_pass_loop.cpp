
/* This software was developed at the National Institute of Standards and
 * Technology by employees of the Federal Government in the course of their
 * official duties. Pursuant to title 17 Section 105 of the United States
 * Code this software is not subject to copyright protection and is in the
 * public domain. NIST assumes no responsibility whatsoever for its use by
 * other parties, and makes no guarantees, expressed or implied, about its
 * quality, reliability, or any other characteristic.

 * We would appreciate acknowledgement if the software is used.
 * The SAMATE project website is: http://samate.nist.gov
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userpass = "";
	unsigned int nbT=  0;
	cout << "Enter your password: " << endl;
	
	while (++nbT < 4){
	cin  >> userpass;
	if (userpass == "DEADBEEF")
		{cout << "You are now identified." << endl;
		 return 0;}
	else
		cout << "Your password is not valid, please reenter it." << endl;
	}
	
	return 0;
}
