#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class library
{
public:
    int id;
    char bookname[100];
    char author[100];
    char student[100];
    int price;
    int date;
};

int main()
{
    library lib[20];
    int choice = 0;
    int count = 0;
    while (choice != 3)
    {
        cout << "*************** ENTER 1 TO INPUT DETAILS : *************** " << endl;
        cout << "id" << endl
             << "bookname" << endl
             << "author" << endl
             << "students" << endl
             << "prices" << endl
             << "date" << endl;
        cout << "*************** ENTER 2 DISPLAY DETAILS *************** " << endl;
        cout << "*************** ENTER 3 TO QUIT *************** " << endl;
        cout << "*************** ENTER THE CHOICE ***************" << endl;
        cin >> choice;
        switch (choice)
        {
        start:
        case 1:
            cout << "*************** ENTER BOOK ID : ***************" << endl;
            cin >> lib[count].id;
            cout << "*************** ENTER BOOK NAME : ***************" << endl;
            // cin>>lib[count].bookname;
            cin.getline(lib[count].bookname, 100, '&');
            cout << "*************** ENTER AUTHOR NAME : ***************" << endl;
            // cin>>lib[count].author;
            cin.getline(lib[count].author, 100, '&');
            cout << "*************** ENTER STUDENT NAME : ***************" << endl;
            // cin>>lib[count].student;
            cin.getline(lib[count].student, 100, '&');
            cout << "*************** ENTER BOOK PRICE : ***************" << endl;
            cin >> lib[count].price;
            cout << "*************** ENTER THE PURCHASING  DATE : ***************" << endl;
            cin >> lib[count].date;
            count++;
            break;
        case 2:
            int i;
            for (i = 0; i < count; i++)
            {
                cout << "BOOK ID : " << lib[i].id << endl;
                cout << "BOOK NAME : " << lib[i].bookname;
                cout << "AUTHOR NAME : " << lib[i].author;
                cout << "STUDENT NAME : " << lib[i].student;
                cout << "BOOK PRICE : " << lib[i].price << endl;
                cout << "PURCHASING DATE : " << lib[i].date << endl;
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "YOU HAVE ENTERED WRONG VALUE , PLEASE TRY AGAIN !!!!!!!!!! " << endl;
            goto start;
        }
    }
}