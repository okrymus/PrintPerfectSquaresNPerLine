// The program will print the perfect squares up to a user defined limit(Second version).
// Print perfect squares n per line
// Programmer: Panupong Leenawarat
// Last modify: 11/09/15

#include <iostream>

using namespace std;
int main()
{
	int limit, line;
	//Tittle
	cout << endl;
	cout 
		<< "\t   Print the perfect squares up to a user defined limit \n"
		<<  "\t          Uses for and conditional operator.            \n"
		<<  "\t                  by Lee. Panupong				         " << endl << endl;

	while (true)
	{
		cout << "What is the limit: ";
		cin >> limit;	 cin.ignore(80, '\n');
		cout << "How many perfect squares would you like per line: ";
		cin >> line;	 cin.ignore(80, '\n');
		
		while (limit < 0)
		{
			cout << "\nWhat is the limit: ";
			cin >> limit;	 cin.ignore(80, '\n');
			cout << "How many perfect squares would you like per line: ";
			cin >> line;	 cin.ignore(80, '\n');
		}

		for (int count = 1; count * count <= limit; count++ )	
			cout << count * count  << "\t" << (count % line == 0 ? "\n" : "") ;
		cout << endl <<endl ;
	}
}