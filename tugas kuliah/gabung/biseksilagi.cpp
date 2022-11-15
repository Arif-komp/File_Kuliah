#include <iostream>
#include <cmath>

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
        sel = c - a;
      }
      else
      {
        b = c;
        fb = fc;
        sel = c - b;
      }
      if (sel < tol)
      {
        break;
      }
    }
    cout << "Akar dari persamaan adalah: \n";
    cout << "Akar : " << c << endl;
  }
  else
  {
  }

  return 0;
}
