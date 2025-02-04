vector <sClient> LoadCleintsDataFromFile(string FileName)
{
vector <sClient> vClients;
fstream MyFile;
MyFile.open(FileName, ios::in);//read Mode
if (MyFile.is_open())
{
string Line;
sClient Client;
while (getline(MyFile, Line))
{
Client = ConvertLinetoRecord(Line);
vClients.push_back(Client);
}
MyFile.close();
}
return vClients;
