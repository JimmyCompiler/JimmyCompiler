#include <iostream>

using namespace std;

int main()
{
cout << " Ahlan bek ya user";
cout << "\nThe number should be <= 3000";
cout << "\nEnter the number: ";
int num;
//cout << "\n ";
cin >> num;
cout << " \n";
if (num > 3000){
    cout << "The number is > 3000";
}
while( num <= 3000){
        /*cout << "Enter the number: ";
cin >> num;*/
    int i ,k ,z ,q;

    i= (num/1000)*1000;

    if (i == 1000)
        cout << "M";
    if (i == 2000)
        cout << "MM";
    if (i == 3000)
        cout << "MMM";

    k=num%1000;
    k=(k/100)*100;      // مثلااا loop on "3"-->100 digits

     if (k == 100)
        cout << "C";
    else if (k == 200)
        cout << "CC";
    else if (k == 300)
        cout << "CCC";
    else if (k == 400)
        cout << "CD";
    else if (k == 500)
        cout << "D";
    else if (k == 600)
        cout << "DC";
    else if (k == 700)
        cout << "DCC";
    else if (k == 800)
        cout << "DCCC";
    else if (k == 900)
        cout << "CM";

    k=num%1000;
    i=k%100;
    z=(i/10)*10;

     if (z == 10)
        cout << "X";
    else if (z == 20)
        cout << "XX";
    else if (z == 30)
        cout << "XXX";
    else if (z == 40)
        cout << "XL";
    else if (z == 50)
        cout << "L";
    else if (z == 60)
        cout << "LX";
    else if (z == 70)
        cout << "LXX";
    else if (z == 80)
        cout << "LXXX";
    else if (z == 90)
        cout << "XC";
        //return 0;
    //k=(i/10)*10;
    q=i%10;

     if (q == 1)
        cout << "I";
    else if (q == 2)
        cout << "II";
    else if (q == 3)
        cout << "III";
    else if (q == 4)
        cout << "IV";
    else if (q == 5)
        cout << "V";
    else if (q == 6)
        cout << "VI";
    else if (q == 7)
        cout << "VII";
    else if (q == 8)
        cout << "VIII";
    else if (q == 9)
        cout << "IX";

        return 0;
}

}


