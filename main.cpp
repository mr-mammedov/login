#include <iostream>
#include <fstream>

using namespace std;

class Register
{
public:
    string username, password;
};

class Login
{
public:
    string inUsername, inPassword;
};

int main()
{

    int k =0;


    //Register
    Register newAccount;
    cout << "\n        Welcome! Please Register!\n" << endl;

    cout << "Enter your username: ";
    getline(cin, newAccount.username);

    cout << "Enter your password: ";
    getline(cin, newAccount.password);

   cout << "\n\n        You Registered successfully, now, please Login! " << endl;

    while(1)
    {
        //Login
    Login newLogin;

    cout << "\n\nUsername: ";
    getline(cin, newLogin.inUsername);

    cout << "Password: ";
    getline(cin, newLogin.inPassword);

    ofstream file(newLogin.inUsername);

    if(newAccount.username == newLogin.inUsername && newAccount.password == newLogin.inPassword)
    {
        cout << "\n\n        Congratulations. You logged in to the system!\n" << endl;
        file << "Username: " << newLogin.inUsername << endl;
        file << "Password: " << newLogin.inPassword << endl;
        file.close();
        cin.ignore();
        break;

    }

    else
        cout << "\n\n        You entered wrong. Try again!" << endl;

    }

    return 0;
}
