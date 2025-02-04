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
// ---------------------------------------
void AddDataLineToFile(sClient Client) {
    string s1 = ConvertRecordToLine(Client);

    fstream MyFile;
    MyFile.open("Clients.txt", ios::out | ios::app);
    
    if (MyFile.is_open()) {
        MyFile << s1 << endl;
        MyFile.close();
    }
}
