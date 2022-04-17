#include <bits/stdc++.h>
using namespace std;
string readFile(string F)
{
    ifstream infile;
    infile.open(F);

  string line;
  string allline;
    while(getline(infile,line))
    {

        allline+=line+"\n";
    }
infile.close();
return allline;

}

string removeComments(string prgm)
{

    int n = prgm.length();
    string res;

    // Flags to indicate that single line and multiple line comments
    // have started or not.
    bool s_cmt = false;
    bool m_cmt = false;


    // Traverse the given program
    for (int i=0; i<n; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;

        // If multiple line comment is on, then check for end of it
        else if  (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false,  i++;

        // If this character is in a comment, ignore it
        else if (s_cmt || m_cmt)
            continue;

        // Check for beginning of comments and set the appropriate flags
        else if (prgm[i] == '/' && prgm[i+1] == '/')
            s_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true,  i++;

        // If current character is a non-comment character, append it to res
        else  res += prgm[i];
    }
    return res;
        //}
}
int countOperator(string code)
{
     int n = code.length();
     int a,b,c,d,e=0;
     for (int i=0; i<n; i++)
     {
         if(code[0]=='#')
         {
             for(int p=0;p<='\n';p++)
             continue;
         }

         if(code[i]=='+')
            a=1;
         else if(code[i]=='-')
            b=1;
        else if(code[i]=='*')
            c=1;
        else if(code[i]=='/')
            d=1;
     }
     return a+b+c+d;
}


int main()
{
string s = readFile("File.cpp");
cout<<s<<endl;

string s2= removeComments(s);
cout<<s2<<endl;
cout<<"Number of Different Operators :"<<countOperator(s2)<<endl;


}

