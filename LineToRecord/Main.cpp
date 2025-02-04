#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct sClient
{
  string AccountNumber;
  string PinCode;
  string Name;
  string Phone;
  double AccountBalance;
};
vector<string>SpiltString(string s1, string delim = "#//#")
{
  vector<string>vstring;
  string sWord = "";
  short pos = 0;
  while((pos=s1.find(delim))!=std::string::npos)
  {
    sWord = s1.substr(0,pos);
    if(sWord!="")
    {
      vstring.push_back(sWord);
    }
    s1.erase(0,pos+delim.length());
  }
  if(s1!="")
  {
    vstring.push_back(s1);
  }
  return vstring;
}
sClient ConvertFromLineToRecord(string s1)
{
  sClient Client;
vector<string> vClientData;
vClientData = SpiltString(s1);
Client.AccountNumber = vClientData[0];
Client.PinCode = vClientData[1];
Client.Name = vClientData[2];
Client.Phone = vClientData[3];
Client.AccountBalance = stod(vClientData[4]);//cast string to

return Client;
}
void PrintClientRecord(sClient Client)
{
cout << "\n\nThe following is the extracted client record:\n";
cout << "\nAccout Number: " << Client.AccountNumber;
cout << "\nPin Code : " << Client.PinCode;
cout << "\nName : " << Client.Name;
cout << "\nPhone : " << Client.Phone;
cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main() 
{
string s1="A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000h" ;
sClient Client1 = ConvertFromLineToRecord(s1);
PrintClientRecord(Client1);
}
