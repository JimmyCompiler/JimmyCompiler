#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    while(true)
    {
        cout<<"\nhwlecome user. "<<endl;
        int Result;
        cout<<"\nWhat do you like to do today?\n\n1-Cipher a message\n2-deCipher a message\n3-End"<<endl;
        cin>>Result;
        int arr [5][5]=
        {
            { 'A', 'B', 'C', 'D', 'E' },
            { 'F', 'G', 'H', 'I', 'J' },
            { 'K', 'L', 'M', 'N', 'O' },
            { 'P', 'Q', 'S', 'R', 'T' },
            { 'U', 'V', 'X', 'Y', 'Z' }
        };
        if (Result==1)
        {
            bool isTest = true;
            string  phrase;
            cout<<"Please Enter the message to Cipher ::"<<endl;
            cin.ignore();
            getline(cin,phrase);
            for (int k=0; k < phrase.length(); k++)
            {
                for(int i=0 ; i<5; i++)
                {
                    for(int j=0 ; j<5; j++)
                    {
                        if ( phrase[k] == arr[i][j] || toupper(phrase[k]) == arr[i][j])
                        {
                            cout<<i+1<<j+1;
                        }
                        else if(phrase[k] == ' ' && isTest )
                        {
                            cout<< ' ';
                            isTest = false;
                        }
                    }
                }
                isTest = true;
            }
        }
        else if (Result==2)
        {
            string num;
            cout<<"Please Enter the message to deCipher ::"<<endl;
            cin.ignore();
            getline(cin,num);
            for(int i=0; i<num.length(); i++)
            {
                int x,y,z;
                if(num[i]==' ')
                {
                    cout<<' ';
                    continue;
                }
                x=(num[i]-'0');
                y=(num[i+1]-'0');
                z=(arr[x-1][y-1]);
                if( (i==0 || num[i-1]==' ') && (num[i+2]==' ' || i==num.length()-2)  )
                {
                    cout<<(char)z;
                }
                else
                {
                    cout<<(char)(z+32);
                }
                i++;
            }
        }
        else
        {
            cout<<"\n\n\t\t\t thanks for using the program !"<<endl;
            return 0;
        }
    }
}
