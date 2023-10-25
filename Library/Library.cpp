//#include <iostream>
//#include"Book.h"
#include"Lib.h"

using namespace std;

Lib ShowLibrary(const Lib &library)
{
	library.Show();
	Lib temp;
	//some code
	return temp;//copy constructor
}

int main()
{
	Book b1("Baskervil's dog", "Konan Doil",318, 1986, Detective);
	/*Book b2("Lord of the rings", "John Tolkien",400, 1933, Genre::Fantasy);
	Book b3("Harry Potter", "Joan Roaling",800, 1997, Genre::FairyTale);
	Book b4("Little prince", "Antoan ",200, 1970, Genre::FairyTale);*/
	//b1.ShowInfo();

	Lib lib ("Junior Library", "Rivne, Kyivska 67a");
	lib.AddBook(b1);
	lib.AddBook(Book("Lord of the rings", "John Tolkien", 400, 1933, Genre::Fantasy));
	lib.AddBook(Book("Harry Potter", "Joan Roaling", 800, 1997, Genre::FairyTale));
	lib.AddBook(Book("Little prince", "Antoan ", 200, 1970, Genre::FairyTale));
	lib.Show();


	 ShowLibrary(lib);
	 cout << "________________Operator = ________________" << endl;
	 Lib test; // = lib;//copy constructor
	 test = lib;
	 test.Show();
	 Lib res;
	 res = test = lib;

	 int a = 5, b = 7, c = 10;
	 a = b = c;

	 Lib newLIb(res);

}

