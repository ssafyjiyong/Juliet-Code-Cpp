
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
using namespace std;


void function() {
	short *p = 0;
	try {
                p = new short [1000];
            }
 	catch (bad_alloc&)
	{
	  cout << "Error allocating memory." << endl;
	}

	cout<<p;
	return;
}

int main()
{
	int i,j;
	cout<<"Please enter two numbers: "<<endl;
	cin>>i>>j;
	
	/* if i==j, it will cause infinite loop */
	while (i==j) function();
	return 0;
}

