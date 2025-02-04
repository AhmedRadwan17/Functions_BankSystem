#include <iostream>
#include <fstream>

using namespace std;

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient() {
    sClient Client;
    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;
    cin.ignore(); // ✅ تفادي مشاكل الإدخال

    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

void AddDataLineToFile(sClient Client) {
    string s1 = ConvertRecordToLine(Client);
    fstream MyFile;
    MyFile.open("Clients.txt", ios::out | ios::app);
    
    if (MyFile.is_open()) {
        MyFile << s1 << endl;
        MyFile.close();
        cout << "Client record added successfully!\n\n"; // ✅ رسالة تأكيد
    } else {
        cout << "Error: Could not open file!\n";
    }
}

void ReadChoice() {
    char AddMore = 'y';
    do {
        cout << "Adding New Clients:\n\n";
        sClient Client = ReadNewClient();
        AddDataLineToFile(Client);
        cout << "Do you want to add more clients? (y/n): ";
        cin >> AddMore;
        cin.ignore(); // ✅ تفادي المشاكل عند قراءة الإدخال التالي
    } while (AddMore == 'y' || AddMore == 'Y');
}

int main() {
    ReadChoice();
    cin.ignore();
    cin.get();  // ✅ استبدال system("pause")
    return 0;
}
