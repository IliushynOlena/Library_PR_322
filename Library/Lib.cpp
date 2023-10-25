#include "Lib.h"

Lib::Lib()
{
	name = "no name";
	address = "no address";
	books = nullptr;
	bookCount = 0;
}

Lib::Lib(string name, string address)
{
	this->name = name;
	this->address = address;
	books = nullptr;
	bookCount = 0;
}

void Lib::Show() const
{
	cout << "Name Library : " << name << endl;
	cout << "Address Library : " << address << endl;
	for (int i = 0; i < bookCount; i++)
	{
		books[i].ShowInfo();
	}
}

void Lib::AddBook(Book b)
{
	Book* temp = new Book[bookCount + 1];
	for (int i = 0; i < bookCount; i++)
	{
		temp[i] = books[i];
	}
	temp[bookCount] = b;
	if (books != nullptr)
		delete[]books;
	books = temp;
	bookCount++;
}
