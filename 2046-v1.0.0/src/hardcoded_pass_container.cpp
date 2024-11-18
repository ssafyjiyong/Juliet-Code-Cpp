
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


// Declaration of the User class
class User
{
	std::string username;
	std::string userpass;
public:
	User(const std::string& _username = "John Doe", const std::string& _userpass = "DEADCOFFEE") {
		username = _username;
		userpass = _userpass;
	}
	User(const User& user) {
		username = user.username;
		userpass = user.userpass;
	}
	~User() {}

	inline bool identification(const std::string& name, const std::string& pass) const {
		return (name == username && pass == userpass);
	}
	
	inline User& operator=(const User& user) {
		username = user.username;
		userpass = user.userpass;
		return *this;
	}

	friend bool operator==(const User& user1, const User& user2);
};

// Test the information of 2 users
bool operator==(const User& user1, const User& user2) {
	return (user1.username == user2.username && user1.userpass == user2.userpass);
}


// Continue with the source...
using namespace std;

int main()
{
	User admin("admin", "DEADBEEF");
	string userpass = "";
	string username = "";
	cout << "1) Identity Check" << endl;
	cout << "username: " << endl;
	cin  >> username;
	cout << "password: " << endl;
	cin  >> userpass;

	User user(username, userpass);
	if (user == admin) {
		cout << "Hello Admin!" << endl;
	}
	else
		cout << "Your personal information seems to be wrong, please reenter." << endl;

	return 0;
}
