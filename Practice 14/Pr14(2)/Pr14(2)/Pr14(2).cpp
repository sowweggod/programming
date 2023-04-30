#include <iostream>
using namespace std;

int main()
{
	int koki[2] = {1,2};
	try {
		cout << koki[-1];
		
	}
	catch (exception e) {
		
		cout << e.what();
	}
}

