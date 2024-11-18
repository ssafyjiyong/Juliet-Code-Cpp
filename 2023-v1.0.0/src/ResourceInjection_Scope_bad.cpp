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

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const char *outputFName(const char *__str) {
	return __str;
}

int main(int argc, const char *argv[])
{
	ifstream in(outputFName(argv[2]));
	char temp[100];
	while(!in.getline(temp, 100).fail()&&!in.eof())
	{
		cout << temp<<endl;
	}
        cout << argc<<endl;
	cout << temp<<endl;
    return 0;
}



