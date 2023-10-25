#pragma once
#include"Book.h"
class Lib
{

	/*
	constructor
	destructor
	operator =
	copy constructor
	*/
private:
	string name;//User Library
	string address;//Soborna 16
	Book* books;//0x125HGG
	int bookCount;//5
public:
	Lib();
	Lib(string name, string address);
	explicit Lib(const Lib &other)
	{
		this->name = other.name;
		this->address = other.address;
		this->books = new Book[other.bookCount];
		for (int i = 0; i < other.bookCount; i++)
		{
			this->books[i] = other.books[i];
		}
		this->bookCount = other.bookCount; 
		cout << "Copy constructor" << endl;
	}
	Lib( Lib&& other)
	{
		this->name = other.name;
		this->address = other.address;
		this->books = other.books;	
		other.books = nullptr;
		this->bookCount = other.bookCount;
		cout << "Move constructor" << endl;
	}
	Lib& operator =(const Lib& other)
	{
		this->name = other.name;
		this->address = other.address;
		if (books != nullptr)
			delete[]books;
		this->books = new Book[other.bookCount];
		for (int i = 0; i < other.bookCount; i++)
		{
			this->books[i] = other.books[i];
		}
		this->bookCount = other.bookCount;
		return *this;
		cout << "operator = " << endl;
	}

	void Show()const;
	void AddBook(Book book);
	~Lib()
	{
		if (books != nullptr)
			delete[]books;
	}

};
