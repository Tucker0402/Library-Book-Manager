
// Library Book Manager
// Ethan Rabideau

#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
	string Title;
	string Author;
	int yearPublished = 0;
	int numPages = 0;
};

int main()
{
	Book books[4];
	books[0].Title = "1. Great Expectations";
	books[1].Title = "2. 1984";
	books[2].Title = "3. Moby-Dick";
	books[3].Title = "4. Old Yeller";

	books[0].Author = "Charles Dickens";
	books[1].Author = "George Orwell";
	books[2].Author = "Herman Melville";
	books[3].Author = "Fred Gipson";

	books[0].yearPublished = 1861;
	books[1].yearPublished = 3071;
	books[2].yearPublished = 1851;
	books[3].yearPublished = 1956;

	books[0].numPages = 544;
	books[1].numPages = 2;
	books[2].numPages = 635;
	books[3].numPages = 192;

	int id = 0;
	char save = 'a';
	
	for (int i = 0; i < 4; i++)
	{
		cout << books[i].Title << "\n";
		cout << books[i].Author << "\n";
		cout << books[i].yearPublished << "\n";
		cout << books[i].numPages << "\n" "\n";
	}
	
	cout << "Enter the ID of the book you would like to update: ";
	cin >> id;
	if (id < 1 || id>4)
	{
		cout << "Book Not Found!";
	}
	else
	{
		id--;
		cout << books[id].Title << "\n";
		cout << "Enter the Author (" << books[id].Author << "): ";
		cin >> books[id].Author;
		cout << "Enter the Year Published (" << books[id].yearPublished << "): ";
		cin >> books[id].yearPublished;
		cout << "Enter the Number of Pages (" << books[id].numPages << "): ";
		cin >> books[id].numPages;
		cout << "Save These Changes? (Y/N): ";
		cin >> save;

		if (save == 'y')
		{
			cout << books[id].Title << "\n";
			cout << books[id].Author << "\n";
			cout << books[id].yearPublished << "\n";
			cout << books[id].numPages << "\n";
		}

		else
		{
			cout << "Changes Not Saved!";
		}
	}

	(void)_getch();
	return 0;
}
