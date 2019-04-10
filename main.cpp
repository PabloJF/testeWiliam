#include <iostream>

using namespace std;

int main()
{

    int num = 0;
    int *n = new int;
    int *v;

    v = n;

    do // Faca

    {
        cout <<"Entre com o numero inteiro positivo ou -1 para terminar o programa.";
        cin >> num;
        if (num != -1)   //
        {
            *n = num;
            n++;
        }

    } while (num != -1);  //Enquanto
    *n = '\\0';
    for (n = v ; *n!= '\\0'; n++)   // Para
    {
        cout << *n <<  " " ;
         cout << endl;
    }

}
