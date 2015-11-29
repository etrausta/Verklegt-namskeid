#include "interface.h"

Interface::Interface()
{

}


void Interface::pickOption()
{
    cout << "1 - Add computer scientist." << endl;
    cout << "2 - Show list." << endl;
    cout << "3 - Sort." << endl;
    cout << "4 - Exit." << endl;
}

Person Interface::getPersoninfo()
{
    string name;
    string gender;
    string dayOfBirth;
    string dayOfDeath;

    cout << "Name of computer scientist: " << endl;
    cin >> name;
    cout << "Gender: " << endl;
    cout << "Enter 'f' for a female and 'm' for a male." << endl;
    cin >> gender;
    cout << "Enter date of birth (yyyy-mm-dd): " << endl;
    cin >> dayOfBirth;
    cout << "Date of passing (yyyy-mm-dd, Type - if he/she is alive): " << endl;
    cin >> dayOfDeath;

    return Person(name, gender, dayOfBirth, dayOfDeath);
}

void Interface::printList(vector<Person> listOfPersons)
{
    cout << listOfPersons.size() << endl;
    for(int i = 0; i<listOfPersons.size(); i++)
    {
        cout << listOfPersons[i].getName() << endl;
        cout << listOfPersons[i].getGender() << endl;
        cout << listOfPersons[i].getDayOfBirth() << endl;
        cout << listOfPersons[i].getDayOfDeath() << endl;
    }
}
