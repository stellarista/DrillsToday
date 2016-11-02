#include <iostream>
#include <string>
using namespace std;

class Author
{
    protected:
    string name, email;
    char gender;

    public:
    Author();
    Author(string name, string email, char gender)
    {
        this->name=name;
        this->email=email;
        this->gender=gender;
    }
    string getName()
    {
        return name;
    }
    string getEmail()
    {
        return email;
    }
    char getGender()
    {
        return gender;
    }
    string toString()
    {
        string Author = name + "\n" + email + "\n" + gender;
        return Author;
    }
};

class Book
{
private:
    string name;
    Author author;
    double price;
    int qty = 0;
public:
    Book();
    Book(string n, Author a, double p)
    {
        this->name=n;
        this->author=a;
        this->price=p;
    }
    Book(string n, Author a, double p, int qty)
    {
        this->name=n;
        this->author=a;
        this->price=p;
        this->qty = qty;
    }
    string getName()
    {
        return name;
    }
    Author getAuthor()
    {
        return author;
    }
    double getPrice()
    {
        return price;
    }
    void setPrice(double p)
    {
        this->price=p;
    }
    int getQty()
    {
        return qty;
    }
    void setQty(int qty)
    {
        this->qty=qty;
    }
    string toString()
    {
        //Book("The Third Kind",Author("Stellarista", "clarisarose@ymail.com","f"))

        string Book = name + "\n" + author.toString() + "\n" + to_string(price) + "\n" + to_string(qty);
        return Book;
    }

};

int main()
{
    Author mine("Stellarista", "clarisarose@ymail.com",'f');
    Book print("The Third Kind", mine, 200000, 5);
    cout << print.toString();
    //cout << "Hello world!" << endl;
    return 0;
}
