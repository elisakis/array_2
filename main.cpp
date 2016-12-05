//������� 2 � ���������
#include <iostream>
#include <cmath>

using namespace std;

void delete_annoying_primes (int l, int ar[])
{
    int n;
    bool good;
    bool prostoe;
    //���� �� ����� �������
    for (int i = 0; i < l; i++)
    {
        n = ar[i];
        good = true;
        //��������, ������� �� �����
        //���� ����������� ����� n>1 �� ������� �� �� ���� ������� �����, �� ������������� ������ �� �����, �� ��� �������
        if (n < 2)
        {
            prostoe = false;  //0 � 1 - �� �������
        }
        else
        {
            prostoe = true;   //2, 3, 5, 7 - �������
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
            //����� �������, ���� ������ � ����� �� ���������� ��������� �������
            for ( int j = 0; j < i; j++ )
            {
                if (n == ar[j])
                {
                    //����� ������, �� ��������� ������� n
                    good = false;
                    break;
                }
            }
        }

        if (good == true)
        {
            //������� ������� �������, �� ������� �������
            cout << n << " ";
        }
    }
}

int main()
{
    int l = 10;
    int Array[l];

    //������ �������� � �����
    for ( int i = 0; i < l; i++ )
        cin >> Array[i];
    delete_annoying_primes (l, Array);
}
