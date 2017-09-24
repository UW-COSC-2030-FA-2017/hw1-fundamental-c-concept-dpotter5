#include "Collection.h";
#include <iostream>;
#include <string>;
int main()
{
	Collection test;
	//Testing isEmpty()
	cout << "Testing isEmpty()" << endl;
	cout << test.toString() << endl;
	if (test.isEmpty())
		cout << "True" << endl;
	else
		cout << "False" << endl;
	test.insert("Jonathan");
	cout << test.toString() << endl;
	if (test.isEmpty())
		cout << "True" << endl;
	else
		cout << "False" << endl;
	cout << endl;

	//Testing makeEmpty()
	cout << "Testing makeEmpty()" << endl;
	cout << "Before: " + test.toString() << endl;
	test.makeEmpty();
	cout << "After: " + test.toString() << endl << endl;

	//Testing insert()
	cout << "Testing insert()" << endl;
	test.insert("Joseph");
	test.insert("Jotaro");
	cout << test.toString() << endl <<endl;
	
	//Testing remove()
	cout << "Testing remove()" << endl;
	test.remove("Joseph");
	cout << test.toString() << endl;
	test.remove("Josuke");
	cout << test.toString() << endl << endl;

	//Testing removeRandom()
	cout << "Testing removeRandom()" << endl;
	test.insert("Giorno");
	test.insert("Jolyne");
	test.removeRandom();
	cout << test.toString() << endl <<endl;

	//Testing notContained()
	cout << "Testing notContained()" << endl;
	if (test.notContained("Johnny"))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	test.insert("Jo2uke");
	if (test.notContained("Jo2uke"))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	while (0 == 0)
	{

	}
	return 0;
}



