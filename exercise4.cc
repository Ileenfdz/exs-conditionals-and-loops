#include <iostream>

using namespace std;

int main()
{
    int answer;

    salto:
    cout << ("Elija entre estas opciones") << endl;
    cout << ("1") << endl;
    cout << ("2") << endl;
    cout << ("3") << endl;
    cout << ("4") << endl;
    cout << ("Escriba su respuesta : ") << endl;
    cin >> answer;

    switch (answer)
    {
    case 1:
        cout << ("Has elegido la opcion uno ") << endl;
        break;
    case 2:
        cout << ("Has elegido la opcion dos ") << endl;
        break;
    case 3:
        cout << ("Has elegido la opcion tres ") << endl;
        break;
    case 4:
        cout << ("Has elegido la opcion cuatro ") << endl;
        break;
    default:
        goto salto;
    }

    system("PAUSE");
    return 0;
}