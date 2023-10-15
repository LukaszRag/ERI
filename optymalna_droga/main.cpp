#include <iostream>
#include <fstream>

//0 - dost�pne miejsce
//5 - przeszkoda
//3 - wyliczona trasa
//1 - koszt ka�dego ruchu
//gora, dol, lewa, prawa
//f(poz) = g(poz)+h(poz)
//poz - pozycja
//g(poz) - koszt pojscia ze startu do poz
//h(poz)<=koszt optymalnej drogi do celu z pozycji poz
//h((pozx,pozy)) = sqrt(pozx-celx)^2+(pozy-cely)^2

using namespace std;

int main (void) {

cout<<"Wczytywanie danych z pliku\n";

string nazwap="grid.txt";
int wym2=20;
int wym1=20;

//teraz deklarujemy dynamicznie tablice do, kt�rej wczytamyu nasz plik,
int rows = wym2+1;
double **G;
G = new double*[rows];
while(rows--) G[rows] = new double[wym1+1];

cout<<"\n\nNacisnij ENTER aby wczytac tablice o nazwie "<< nazwap;
getchar();

std::ifstream plik(nazwap.c_str());

for ( unsigned int i=1;i<wym2+1;i++)
  {
    for ( unsigned int j=1;j<wym1+1;j++)
    {
         plik >> G[i][j];
    }
  }
plik.close();

cout<<"\nWypisujemy na ekran\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<G[i][j];
   }cout<<"\n";
 }

//na koniec czy�cimy pami�� po naszej tablicy
for(int i=0;i<wym2+1;i++)
{delete[] G[i];}//czyscimy wiersze
delete[] G;//zwalniamy tablice wskaznikow do wierszy

cout<<"\n\nNacisnij ENTER aby zakonczyc";
getchar();

return 0;
}
