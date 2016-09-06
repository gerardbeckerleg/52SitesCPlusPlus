#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
char query[1024];
int len, startNumberLocation, endNumberLocation;
string data;
char strnum[20];
if(getenv("CONTENT_LENGTH"))
{
len = atoi(getenv("CONTENT_LENGTH"));
cin.read(query, len);
data = query;
startNumberLocation = data.find("number")+6;
endNumberLocation = data.find("&button");
}

cout << "Content-Type: text/html\n\n";
cout << "<?xml version = \"1.0\"?>"
<< "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
<< "\"[url="http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\%22>%22;"]http://www.w3.org/TR...html11.dtd\">";[/url]
cout << "<html xmlns = \"[url="http://www.w3.org/1999/xhtml\%22>"]http://www.w3.org/19.../1999/xhtml\">"[/url]
<< "<head><title>Welcome message</title></head>"
<< "<body>"
<< "<h1>Greetings!</h1>"
<< "<p>Welcome " << (data.substr(startNumberLocation, endNumberLocation-startNumberLocation)) <<"</p>"
<< "</body></html>";
return 0;
}