#include <iostream>
#include <math.h>
#include <iomanip>
#include <comip.h>

using namespace std;

float FX(float x)
{
  return (exp(-x) - x);
  // return exp (x)-5*pow(x,2);
}

// int main(void)
void yogi()
{
  float a, b, h;
  int N;
  float x[999];
  float y[999];
  for (int yogi = 0; yogi < 66; yogi++)
  {
    cout << "_";
  }
  cout << endl;

  cout << "\n\n\t\t * Masukan nilai A \t[A]= ";
  cin >> a;
  cout << "\t\t * Masukan niali B \t[B]= ";
  cin >> b;
  cout << "\t\t * Masukan nilai N \t[N]= ";
  cin >> N;

  h = (b - a) / N;

  for (int yogi = 0; yogi < 66; yogi++)
  {
    cout << "_";
  }
  cout << endl
       << endl
       << endl;
  for (int yogi = 0; yogi < 66; yogi++)
    ;
  {
    cout << "_";
  }
  cout << endl;
  for (int i = 0; i <= N; i++)
  {
    x[i] = a + i * h;
    y[i] = FX(x[i]);
    cout << "|  "
         << "x" << i << "\t| \t\t" << x[i] << "\t\t  | \t\t" << y[i] << "\t  | " << endl;
  }

  for (int yogi = 0; yogi < 66; yogi++)
    ;
  {
    cout << "_";
  }
  cout
      << endl
      << endl;
  for (int j = 0; j < N; j++)
  {
    if (y[j] * y[j + 1] < 0, 0)
    {
      cout << "Akar terletak antara " << x[j] << " dan " << x[j + 1] << endl;
      if (y[j] < y[j + 1])
        cout << "\nAkar lebih dekat ke " << x[j] << endl;
      else
        cout << "\nAkar lebih dekat ke " << x[j + 1] << endl;
    }
  }
}

main()
{
yogiLabel:
  cout << fixed;
  cout.precision(2);
  system("color 0A");
  cout << "Create on Wednesday 07.30 am - 26-10-22  | ILKOM - Metode Numerik \n";
  cout << "_________________________________________| ARIF MUNANDAR	|	B02220148 [NIM]";

  puts("\n\n\n\n\tMETHOD - TABLE  [ Numerik ]");

  for (int yogis = 0; yogis < 66; yogis++)
  {
    cout << "_";
  }
  cout << endl;

  cout << "\n\n\tDiketahui  : Fungsi\t= f(x)=exp(-x)-x\n";
  cout << endl;

  yogi();
  for (int line = 0; line < 66; line++)
  {
    cout << "_";
  }

  char y;
  cout << endl
       << "Input (Y) untuk mencoba lagi : ";
  cin >> y;
  while (y == 'y')
  {
    system("cls");
    goto yogiLabel; // go to yogi label
    while (y == 'n')
    {
      system("exit"); // system keluar jika y=n/N
      while (0)
      {
        break;
      }
    }
  }

    return 1;
}
