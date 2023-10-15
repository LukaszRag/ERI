#include <iostream>
#include <fstream>

using namespace std;

int main (void) {

cout<<"Wczytywanie danych z pliku\n";

string nazwap="grid.txt";
int wym2=20;
int wym1=20;

//teraz deklarujemy dynamicznie tablice do, której wczytamyu nasz plik,
int rows = wym2+1;
double **G;
G = new double*[rows];
while(rows--) G[rows] = new double[wym1+1];


rows = wym2+1;
double **GZ;
GZ = new double*[rows];
while(rows--) GZ[rows] = new double[wym1+1];

rows = wym2+1;
double **GO;
GO = new double*[rows];
while(rows--) GO[rows] = new double[wym1+1];

rows = wym2+1;
double **GR;
GR = new double*[rows];
while(rows--) GR[rows] = new double[wym1+1];

rows = wym2+1;
double **Gf;
Gf = new double*[rows];
while(rows--) Gf[rows] = new double[wym1+1];

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

std::ifstream plik2(nazwap.c_str());

for ( unsigned int i=1;i<wym2+1;i++)
  {
    for ( unsigned int j=1;j<wym1+1;j++)
    {
         plik2 >> GZ[i][j];
    }
  }

plik2.close();

std::ifstream plik3(nazwap.c_str());


for ( unsigned int i=1;i<wym2+1;i++)
  {
    for ( unsigned int j=1;j<wym1+1;j++)
    {
         plik3 >> GO[i][j];
    }
  }

plik3.close();


std::ifstream plik4(nazwap.c_str());


for ( unsigned int i=1;i<wym2+1;i++)
  {
    for ( unsigned int j=1;j<wym1+1;j++)
    {
         plik4 >> GR[i][j];
    }
  }

plik4.close();


std::ifstream plik5(nazwap.c_str());


for ( unsigned int i=1;i<wym2+1;i++)
  {
    for ( unsigned int j=1;j<wym1+1;j++)
    {
         plik5 >> Gf[i][j];
    }
  }

plik5.close();



cout<<"\nWypisujemy na ekran G\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<G[i][j];
   }cout<<"\n";
 }


cout<<"\nWypisujemy na ekran GZ\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<GZ[i][j];
   }cout<<"\n";
 }


cout<<"\nWypisujemy na ekran GO\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<GO[i][j];
   }cout<<"\n";
 }


cout<<"\nWypisujemy na ekran GR\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<GR[i][j];
   }cout<<"\n";
 }


cout<<"\nWypisujemy na ekran Gf\n\n";
for(int i=1;i<wym2+1;i++)
 {
  for(int j=1;j<wym1+1;j++)
   {
    cout<<" "<<Gf[i][j];
   }cout<<"\n";
 }

//na koniec czyœcimy pamiêæ po naszej tablicy
for(int i=0;i<wym2+1;i++)
{delete[] G[i];}//czyscimy wiersze
delete[] G;//zwalniamy tablice wskaznikow do wierszy

cout<<"\n\nNacisnij ENTER aby zakonczyc";
getchar();

return 0;
}
