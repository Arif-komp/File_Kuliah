#include <iostream>
#include <cmath>
#include <math.h>
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
  float xa, xb, fxa, fxb, xc, fxc, tol, max, sel;

  cout << "Input batas atas: ";
  cin >> xa;
  cout << "Input batas bawah: ";
  cin >> xb;
  cout << "Input toleransi: ";
  cin >> tol;
  cout << "Input iterasi maksimal: ";
  cin >> max;
  cout << endl;
  cout << " Iterasi    "
       << "Xa \t"
       << "Xb \t"
       << "Xc \t"
       << "f(Xa) \t"
       << "f(Xb) \t"
       << "f(Xc) \t"
       << "Selisih \t" << endl;

  fxa = f(xa);
  fxb = f(xb);

  if (fxb * fxc < 0)
  {
    for (int i = 0; i < max; i++)
    {
      xc = (xa + xb) / 2;
      fxc = f(xc);

      if (fxb * fxc < 0)
      {
        xa = xc;
        fxa = fxc;
      }
      else
      {
        xb = xc;
        fxb = fxc;
      }
      sel = abs(xa - xb);

      if (sel < tol)
      {
        break;
      }
      cout << i + 1 << "\t" << xa << "\t" << xb << "\t" << xc << "\t" << fxa << "\t" << fxb << "\t" << fxc << "\t" << sel << endl;
    }
    cout << "Akar dari persamaan adalah: \n";
    cout << "Akar :" << xc << endl;
    cout << "Selisih  :" << sel << endl;
  }
  else
  {
    cout << "Tidak ada akar dalam rentang" << xa << " dan " << xb << endl;
  }

  return 0;
}
