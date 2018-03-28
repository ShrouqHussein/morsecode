#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: morse code.cpp
// Last Modification Date: 2/3/2018
// Author1 and ID and Group: shrouq hussein
// Teaching Assistant: Mohamed Ata
// Purpose:to cipher & decioher message

char  alpha[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','   '};

string  morse[27]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","   "};

int main()
{
    while(true)
    {
        cout<<"Ahlan ya user   "<<endl;
        cout<<"What  do you like to do today?"<<endl;
        cout<<"1.cipher a message"<<endl;
        cout<<"2. Decipher a message"<<endl;
        cout<<"3.End"<<endl;
        string choose;
        cin >>choose;

        /* cipher*/
if(choose=="1")
        { cout<<"Please enter the message to cipher:"<<endl;
            string text;
            string  ciphered_message="";
            cin.ignore();
            getline(cin,text);
            for(int i=0; i<text.length(); i++)
            {
                text[i]=tolower(text[i]);
            }

            for(int i=0; i<text.size(); i++)
            {
                for(int j=0; j<27; j++)
                {

                    if(text[i]==alpha[j])
                    {
                        ciphered_message+=morse[j];
                        ciphered_message+=" ";
                    }

                }
            }
            cout <<  ciphered_message << endl;
        }
        /*decipher*/

        string  deciphered_message="";
        string x;
        string text[10000];
        int n;

if (choose=="2")
        {  cout<<"Please enter the message to decipher:"<<endl;
            cout<<"Enter n.characters you will type: ";
        cin>>n;
            for(int i=0; i<=n; i++)
            {

            getline(cin,x);
                text[i]=x;
            }
            for(int i=0; i<=n; i++)
            {
                for(int k=0; k<27; k++)
                {

                    if(text[i]== morse[k])
                    {
                        deciphered_message+=alpha[k];
                        deciphered_message+=" ";
                    }
                }
            }
            cout<<  deciphered_message<<endl;
        }
if (choose=="3"){
            break;
        }
    }

    return 0;

}
