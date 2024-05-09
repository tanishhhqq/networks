#include <iostream>
using namespace std;
class LoginManager{
public:
string userNameAttempt;
string passWordAttempt;
LoginManager(){
  accessGranted = 0;
}
void login(){
  cout << "Please Enter the Username & Password. \nUsername : ";
  cin >> userNameAttempt;
  if(userNameAttempt==userName){
    cout << "Password : ";
    cin >> passWordAttempt;
    if(passWordAttempt==passWord){
      cout << "\nEntered Username and Password is correct. \n\nWelcome to Network Security
        LAB";
        }
  }
}
private:
string passWord = "password123";
string userName = "user@gmail.com";
bool accessGranted;
};
int main()
{
  LoginManager loginManagerObj;
  loginManagerObj.login();
}
