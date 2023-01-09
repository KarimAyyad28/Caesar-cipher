#include <iostream>
using namespace std;

string caesarCipher (string txt, int stp);

int main() {
    string text;
    int step;
    cout << "Enter your text : \n" ;
    getline(cin,text);
    cout << "Enter the step : \n" ;
    cin >> step;
    cout << "Your encrypted text in Caeser Cipher  is : \n" << caesarCipher(text,step);
    return 0;
}



string caesarCipher (string txt, int stp)
{
    if (stp==0)
        return txt;
    // encrypting in caeser cipher code.
    for (int i = 0; i < txt.length(); i++)
    {   //If there's space, the program will let it as it is
        if (isspace(txt[i])) continue;
        //Condition for small letters
        if(txt[i]>='a' && txt[i]<='z'){
            txt[i] +=stp;
            if(txt[i]<'a'){
                txt[i]='z'+stp+1;
            }
            if(txt[i]>'z'){
                txt[i]='a'+stp-1;
            }
        }
        //Condition for capital letters
        if(txt[i]>='A' && txt[i]<='Z'){
            txt[i] +=stp;
            if(txt[i]<'A'){
                txt[i]='Z'+stp+1;
            }
            if(txt[i]>'Z'){
                txt[i]='A'+stp-1;
            }
        }
    }
    return txt;

}