#include <iostream>
#include <string>
using namespace std;
string encrypt(string e, int shift)
{
    //will store the result of the encryption 
    string encryption = " ";
    //loops through the string
    for(int i =0; i < e.size(); i++)
    {
        //first check if it is lower case and convert accordingly
        if(islower(e[i]))
        {
            //using ascii keys converts string to appropriate caesar cipher
            encryption +=  char(int(e[i]+shift-97)%26 +97);
        }
        else{
        //same thing but for upper case
        encryption += char(int(e[i]+shift-65)%26 +65);
        }
    }
    return encryption;
}

int main()
{
    
    int shift;
    string message;
    cout<<"Caeser Cipher encryption & decryption: "<<endl;

        cout<<"Enter your shift"<<endl;
        cin>>shift;
        cout<<"enter your message"<<endl;
        cin>>message;
        cout<<"Encrypted Message: "<<encrypt(message,shift)<<endl;


}
