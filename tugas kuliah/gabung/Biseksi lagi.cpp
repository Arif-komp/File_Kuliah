#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float f(float x)
{
  float y;
  y = 2 * pow(x, 2) + 3 * x - 4;
  return y;
}

int main()
{
  float a, b, c, tol, max, fa, fb, fc, sel;

  cout << "Input batas atas : ";
  cin >> a;
  cout << "Input batas bawah : ";
  cin >> b;
  cout << "Input toleransi : ";
  cin >> tol;
  cout << "Input iterasi maksimal : ";
  cin >> max;
  cout << endl;

  cout << " Iterasi "
       << "B.Atas \t"
       << "B.Bawah  \t"
       << "F.Atas \t"
       << "F.Bawah \t"
       << "F.Tengah \t"
       << "selisih \t" << endl;

  fa = f(a);
  fb = f(b);

  if (fa * fb < 0)
  {
    for (int i = 0; i < max; i++)
    {
      c = (a + b) / 2;
      fc = f(c);

      if (fc * fb < 0)
      {
        a = c;
        fa = fc;
        sel = abs(c - b);
      }
      else
      {
        b = c;
        fb = fc;
        sel = abs(c - b);
      }
      sel = abs(c - a);
      if (sel < tol)
      {
        break;
      }
      cout << i + 1 << "\t" << a << "\t" << b << "\t" << c << "\t" << fa << "\t" << fb << "\t" << fc << "\t" << sel << endl;
    }
    cout << "Akar dari persamaan adalah: \n";
    cout << "Akar : " << c << endl;
    cout << "Selisih : " << sel << endl;
  }
  else
  {
  }

  return 0;
}
