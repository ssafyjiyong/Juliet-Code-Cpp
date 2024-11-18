
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
#include <mysql++.h>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2) {
		cout << "You should give an entry parameter..." << endl;
		cout << "Usage: ./sql <parameter>" << endl;
		return 0;
	}

	mysqlpp::Connection con(false);
	con.connect("kikoo", "user","userpass");

	mysqlpp::Query query = con.query();
	query << "SELECT * FROM test WHERE Value = '" << argv[1] << "'";
	mysqlpp::Result res = query.store();

	// Print the result
	cout << "Results: " << endl;
	if (res) {
		mysqlpp::Row row;
		mysqlpp::Row::size_type i;
		for (i=0; row = res.at(i); ++i)
			cout << "\t" << row.at(0) << endl;
	}
	return 0;
}

