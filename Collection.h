#include <array>;
#include <algorithm>;
using namespace::std;

class Collection
{
public:
	//Constructor
	Collection()
	{
	
	}
	//Destructor
	~Collection()
	{
		if (!isEmpty())
			makeEmpty();
	}
	//Only returns true if there are no objects in the collection
	bool isEmpty()
	{
		if (size != 0)
			return false;
		return true;
	}
	//Removes all objects from the collection
	void makeEmpty()
	{
		if (!isEmpty())
		{
			string *temp = new string[0];
			delete[] storage;
			storage = temp;
			size = 0;
		}
		
	}
	//Inserts an object x into the collection
	void insert(string x)
	{
		size++;
	    string *temp = new string[size];
		for (int i = 0; i < size-1; i++)
		{
			temp[i] = storage[i];
		}
		delete[] storage;
		storage = temp;
		storage[size - 1] = x;
	}
	//Removes an object x from the collection (only if it exists)
	void remove(string x)
	{
		if (!notContained(x) && !isEmpty())
		{
			size--;
			string *temp = new string[size];
			int j = 0;
			for (int i = 0; i < size; i++)
			{
				if (storage[j] == x)
					j++;
				temp[i] = storage[j];
				j++;
			}
			delete[] storage;
			storage = temp;
		}
	}
	//Removes an object at random
	void removeRandom()
	{
		if (!isEmpty())
		{
			size--;
			string *temp = new string[size];
			int j = 0;
			int rando = rand() % size;
			for (int i = 0; i < size; i++)
			{
				if (j == rando)
					j++;
				temp[i] = storage[j];
				j++;
			}
			delete[] storage;
			storage = temp;
		}
	}
	//Only returns true if an object equal to x is not in the collection
	bool notContained(string x)
	{
		for (int i = 0; i < size; i++)
		{
			if (storage[i] == x)
				return false;
		}
		return true;
	}
	//Returns the collection in a string form
	string toString()
	{
		string output = "[ ";
		if (!isEmpty())
			for (int i = 0; i < size; i++)
			{
				output = output + storage[i];
				if (i != size - 1)
					output = output + ", ";
			}
		return output + " ]";
	}
private:
	int size = 0;
	string *storage = new string[0];
	
};
