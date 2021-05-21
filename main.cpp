#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int main()
{
    long long int casos;
    list<int> lista;
    list<int>::iterator it;
    cin >> casos;
    if (casos == 1){
        cout << "1" <<endl;
    }else{
        if (casos == 2){
            cout << "1 1" <<endl;
        }else{
            int cont = 2, a = 1, b = 1, c, z, cont2 = 0, tamanho;
            lista.push_back(1);
            lista.push_back(1);
            while (cont < casos){
                z = a + b;
                lista.push_front(z);
                c = a;
                a = z;
                b = c;
                cont++;
            }
            tamanho = lista.size() - 1;
            for (it = lista.begin(); it != lista.end(); it++){
                cout << *it;
                if (cont2 < tamanho){
                    cout << " ";
                    cont2++;
                }
            }
            cout <<endl;
        }
    }
    return 0;
}
