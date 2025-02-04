void PrintAllClientsData(vector <sClient> vClients)
{
cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")
Client(s).";
cout <<
"\n_______________________________________________________";
cout << "_________________________________________\n" << endl;
cout << "| " << left << setw(15) << "Accout Number";
cout << "| " << left << setw(10) << "Pin Code";
cout << "| " << left << setw(40) << "Client Name";
cout << "| " << left << setw(12) << "Phone";
cout << "| " << left << setw(12) << "Balance";
cout <<
"\n_______________________________________________________";
cout << "_________________________________________\n" << endl;
for (sClient Client : vClients)
{
PrintClientRecord(Client);
cout << endl;
}
cout <<
"\n_______________________________________________________";
cout << "_________________________________________\n" << endl;
}
