#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str[100];
    int i,totChar;
totChar=0;
    cout<<"Please enter the string for count characters\n";
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        if(str[i]!=' ')
        {
            totChar++;
        }
    }
    cout<<"The total characters of the given string= "<<totChar;
    getch();
    return 0;
}

