//«адание 2 с массивами
#include <iostream>
#include <cmath>

using namespace std;

void delete_annoying_primes (int l, int ar[])
{
    int n;
    bool good;
    bool prostoe;
    //цикл по всему массиву
    for (int i = 0; i < l; i++)
    {
        n = ar[i];
        good = true;
        //проверим, простое ли число
        //если натуральное число n>1 не делитс€ ни на одно простое число, не превосход€щее корень из числа, то оно простое
        if (n < 2)
        {
            prostoe = false;  //0 и 1 - не простые
        }
        else
        {
            prostoe = true;   //2, 3, 5, 7 - простые
            for ( int j = 2; j <= sqrt(n); j++ )
            {
                if (n % j == 0)
                {
                    prostoe = false;
                    break;
                }
            }
        }

        if (prostoe == true)
        {
            //число простое, ищем повтор в цикле по предыдущим элементам массива
            for ( int j = 0; j < i; j++ )
            {
                if (n == ar[j])
                {
                    //нашли повтор, не учитываем элемент n
                    good = false;
                    break;
                }
            }
        }

        if (good == true)
        {
            //выводим элемент массива, не имеющий повтора
            cout << n << " ";
        }
    }
}

int main()
{
    int l = 10;
    int Array[l];

    //вводим элементы в цикле
    for ( int i = 0; i < l; i++ )
        cin >> Array[i];
    delete_annoying_primes (l, Array);
}
