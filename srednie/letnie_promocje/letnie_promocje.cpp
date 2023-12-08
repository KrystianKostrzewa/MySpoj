#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int k, n;
    cout << "Podaj ilosc wyrazow w slowniku: "; cin >> n;
    cout << "Teraz podaj ilosc liczb, dla ktorych bedziesz chcial szukac wyrazow: "; cin >> k;
    
    string* dict = new string[n];   
    cout << endl << "Podaj wyrazy, ktore chcesz dodac do slownika: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> dict[i];
    }

    string* numbers = new string[k];
    cout << "Podaj liczby, które chcesz sprawdzić: " << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> numbers[i];
    }

    char two[3] = { 'a', 'b', 'c' };
    char three[3] = { 'd', 'e', 'f' };
    char four[3] = { 'g', 'h', 'i' };
    char five[3] = { 'j', 'k', 'l' };
    char six[3] = { 'm', 'n', 'o' };
    char seven[4] = { 'p', 'q', 'r', 's' };
    char eight[3] = { 't', 'u', 'v' };
    char nine[4] = { 'w', 'x', 'y', 'z' };

    int size = 0;
    string* possibleWords = new string[size];

    for(int i = 0; i < )
    
    delete[] dict;
    return 0;
}
