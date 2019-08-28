#include <iostream>
#include <string>
using namespace std;
int int main(){
    char kata[80];
    cout<<"input kata:" endln;
    cin.getline(kata,80);
    int panjang= strlen(kata);
    bool valid= true;
    for(int c=0; c!=panjang/2; c++)
    {
        if (valid)
        {
            if (kata[c] != kata[panjang-c-1])
            {
                valid= false;
            }
        }
        else
        {
            break;
        }
    }
    if (valid== true)
    {
        cout<<"kata tersebut bukan palindrome" endln;
    }
    return 1;
}