#include <iostream>
#include <string>

using namespace std;

class Author
{
    private:
    string name, email;
    char gender;

    public:
    Author();
    Author(string n, string e, char g)
    {
        this->name=n;
        this->email=e;
        this->gender=g;
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

       /* Author("Stellarista", "clarisarose@ymail.com",'f');*/
       /* cout << name <<endl;
        cout << email <<endl;
        cout << gender<<endl;*/

        //return Author;
    }
};

int main()
{


    Author print("Stellarista", "clarisarose@ymail.com",'f');
    cout << print.toString();


   /* string name,email;
    char gender;

    cin>>name;
    cin>>email;
    cin>>gender;

    Author print(name, email,gender);
    cout << print.toString();
*/
    return 0;
}
