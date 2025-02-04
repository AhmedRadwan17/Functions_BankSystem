string ConvertRecordToLine(sClient Client , string Seperator = "#//#")
{
  string stClientRecord = "";
stClientRecord += Client.AccountNumber + Seperator;
stClientRecord += Client.PinCode + Seperator;
stClientRecord += Client.Name + Seperator;
stClientRecord += Client.Phone + Seperator;
stClientRecord += to_string(Client.AccountBalance);
return stClientRecord;
}
