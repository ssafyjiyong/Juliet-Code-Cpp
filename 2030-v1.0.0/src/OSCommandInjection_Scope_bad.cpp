
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

const char * retStr(const char *in){
	return in;
}

int main(int argc, const char *argv[])
{
	string cmd("dir ");
	if(argc>1){
		cmd.append(retStr(argv[1]));
		cout<<system(cmd.c_str())<<endl;
	}
	
	return 0;
}
