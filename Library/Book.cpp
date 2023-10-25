#include "Book.h"

Book::Book()
{
	title = "none";
	author = "none";
	pages = 0;
	year = 0;
	genre = None;//1
}

void Book::ShowInfo() const
{
	cout << "Title : " << title << endl;
	cout << "Author : " << author << endl;
	cout << "Pages : " << pages << endl;
	cout << "Year : " << year << endl;
	cout << "Genre : " << genre << " ";

	switch (genre)
	{
	case None:cout << "None" << endl;break;
	case Detective:cout << "Detective" << endl;break;
	case Adventury:cout << "Adventury" << endl;	break;
	case Drama:cout << "Drama" << endl;	break;
	case Comedy:cout << "Comedy" << endl;	break;
	case History:cout << "History" << endl;	break;
	case Horror:cout << "Horror" << endl;	break;
	case Science:cout << "Science" << endl;	break;
	case Biography:cout << "Biography" << endl;	break;
	case Roman:cout << "Roman" << endl;	break;
	case FairyTale:cout << "FairyTale" << endl;	break;
	case Thriller:cout << "Thriller" << endl;break;
	case Fantasy:cout << "Fantasy" << endl;break;
	}
	cout << "______________________________________" << endl;

}
