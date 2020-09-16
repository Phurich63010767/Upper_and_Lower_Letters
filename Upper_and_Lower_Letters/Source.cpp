#include<iostream>
using namespace std;

void change(int i, int s, string x)
{
    while (i < s)
    {
        int t = 0;
        char* p;
        p = &x[i];              
        if (i % 2 == 0)
        {
            if (*p >= 97 && *p <= 122)
            {
                *p = *p - 32;
            }
            if (*p >= 65 && *p <= 90)
            cout << *p;
        }
        if (i % 2 != 0)
        {
            if (*p >= 65 && *p <= 90)
            {
                *p = *p + 32;
            }
            if (*p >= 97 && *p <= 122)
            cout << *p;
        }        
        i++;        
    }    
}
int main()
{    
    START:    
    int i = 0, s, t = 0;
    string x;
    cout << "Enter letters: ";
    cin >> x;   
    s = x.size();
    while (t < s)
    {
        char* p1 = &x[t];
        if (*p1 < 65 || (*p1 > 90 && *p1 < 97) || *p1 > 122)
        {
            cout << "Enter letter only." << endl;
            system("pause");
            system("CLS");
            goto START;
        }
        t++;
    }
    change(i, s, x);
   
    return 0;
}
