#include<iostream>
#include<string>
using namespace std;

class admin {
    string password, email;
public:
    admin(string pass, string mail) : password(pass), email(mail) {}
    virtual void display() {
        cout << "\n\tWELCOME TO THE NATIONAL FLIGHT SECTION (ADMIN)\n";
    }
    virtual ~admin() {}
};

class admin_international : public admin {
public:
    admin_international(string pass, string mail) : admin(pass, mail) {}
    void display() override {
        cout << "\n\tWELCOME TO THE INTERNATIONAL FLIGHT SECTION (ADMIN)\n";
    }
};

class user {
protected:
    string name;
    int cnic;
public:
    user(string n, int id) : name(n), cnic(id) {}
    virtual void displayinfo() {
        cout << "Name: " << name << ", CNIC: " << cnic << endl;
    }
    virtual ~user() {}
};

class national : public user {
public:
    national(string n, int id) : user(n, id) {}
    void displayinfo() override {
        cout << "WELCOME TO THE NATIONAL FLIGHT SECTION (USER)\n";
        user::displayinfo();
    }
};

class international : public user {
    string passport;
public:
    international(string n, int id, string pass) : user(n, id), passport(pass) {}
    void displayinfo() override {
        cout << "WELCOME TO THE INTERNATIONAL FLIGHT SECTION (USER)\n";
        user::displayinfo();
        cout << "Passport Number: " << passport << endl;
    }
};

void fixdate(int &day, int &month, int &year) {
    day += 3;
    if (day > 30) {
        day -= 30;
        month++;
    }
    if (month > 12) {
        month = 1;
        year++;
    }
}

void get_valid_date(int &day, int &month, int &year) {
    cout << "Enter today's date (day month year): ";
    cin >> day >> month >> year;
    while (((day < 1 || day > 30) && month <= 7 && month % 2 == 0 && month != 2) || 
           ((day < 1 || day > 31) && month <= 7 && month % 2 == 1 && month != 2) ||
           ((day < 1 || day > 31) && month > 7 && month % 2 == 0) ||
           ((day < 1 || day > 30) && month > 7 && month % 2 == 1) ||
           (month < 1 || month > 12) ||
           (year < 2025)) {
        cout << "\nInvalid date, ENTER AGAIN!\n";
        cin >> day >> month >> year;
    }
}

int main() {
    string name, pass, email_admin, passport;
    int cnic, day, month = 4, year = 2025, op;

    cout << "**********************WELCOME TO FLIGHT SYSTEM**************************\n";

    cout << "Press 1: ADMIN NATIONAL\n";
    cout << "Press 2: ADMIN INTERNATIONAL\n";
    cout << "Press 3: USER NATIONAL\n";
    cout << "Press 4: USER INTERNATIONAL\n";
    cout << "Enter your option: ";
    cin >> op;

    switch (op) {
        case 1: {
            cout << "Enter password: ";
            cin >> pass;
            cout << "Enter email: ";
            cin >> email_admin;
            admin a1(pass, email_admin);
            a1.display();
            break;
        }

        case 2: {
            cout << "Enter password: ";
            cin >> pass;
            cout << "Enter email: ";
            cin >> email_admin;
            admin_international a1(pass, email_admin);
            a1.display();
            break;
        }

        case 3: {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter CNIC: ";
            cin >> cnic;
            national n1(name, cnic);
            n1.displayinfo();

            get_valid_date(day, month, year);

            fixdate(day, month, year);

            cout << "\nPress 1: " << day << "-" << month << "-" << year << " Lahore to Karachi (Fly Jinnah) 6:30 AM\n";
            cout << "Press 2: " << day << "-" << month << "-" << year << " Karachi to Islamabad (Air Blue) 5:00 PM\n";
            cout << "Press 3: " << day << "-" << month << "-" << year << " Islamabad to Multan (PIA) 2:00 PM\n";

            int fchoice;
            cout << "Enter your flight choice: ";
            cin >> fchoice;
            cout << "You have successfully booked flight option " << fchoice << " on " << day << "-" << month << "-" << year << endl;
            break;
        }

        case 4: {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter CNIC: ";
            cin >> cnic;
            cout << "Enter Passport Number: ";
            cin >> passport;
            international i1(name, cnic, passport);
            i1.displayinfo();

            get_valid_date(day, month, year);

            fixdate(day, month, year);

            cout << "\nPress 1: " << day << "-" << month << "-" << year << " Lahore to Dubai (Emirates) 8:00 AM\n";
            cout << "Press 2: " << day << "-" << month << "-" << year << " Karachi to London (British Airways) 10:00 AM\n";
            cout << "Press 3: " << day << "-" << month << "-" << year << " Islamabad to New York (PIA) 9:00 PM\n";

            int fchoice;
            cout << "Enter your flight choice: ";
            cin >> fchoice;
            cout << "You have successfully booked international flight option " << fchoice << " on " << day << "-" << month << "-" << year << endl;
            break;
        }

        default:
            cout << "Invalid option selected.\n";
    }
    

    return 0;
}

