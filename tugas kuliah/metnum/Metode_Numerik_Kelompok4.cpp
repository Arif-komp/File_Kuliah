#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

// Definisikan fungsi

float f(float x)
{
  float y;
  y = 2 * pow(x, 2) + 3 * x - 4;
  return y;
}

int main()
{
  /*
  KETERANGAN VARIABEL
  xa : batas atas (x1)
  xb : batas bawah (x2)
  xc : nilai tengah (x3)
  tol : nilai toleransi
  max : iterasi maksimal
  fxa : fungsi nilai batas atas
  fxb : fungsi nilai batas bawah
  fxc : fungsi nilai tengah
  eror : Selisih
  */
  float xa, xb, xc, tol, max, fxa, fxb, fxc, eror;

  cout << "\t\t <<=>>  M E T O D E __ N U M E R I K ||> M E T O D E __ B I S E K S I  <<=>>\n\n\n";
  cout << "\t KELOMPOK 4\n\n";
  cout << "\t NAMA : ARIF MUNANDAR\n";
  cout << "\t NIM  : B02220148\n\n";
  cout << "\t NAMA : \n";
  cout << "\t NIM  : \n\n";
  cout << "\t <=============================================================================================================>\n";

  cout << "Input Batas Atas : ";
  cin >> xa;
  cout << "Input Batas Bawah : ";
  cin >> xb;
  cout << "Input Nilai Toleransi : ";
  cin >> tol;
  cout << "Input Iterasi Maksimal : ";
  cin >> max;
  cout << endl;

  cout << "----------------------------------------------------------------------------------------------------------------------\n";
  cout << "Iterasi    "
       << "    X1 \t"
       << "       X2 \t"
       << "       X3 \t"
       << "    f(x1) \t"
       << "    f(x2) \t"
       << "    f(x3) \t"
       << "   Selisih \t" << fixed << endl;
  cout << "----------------------------------------------------------------------------------------------------------------------\n";

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
      eror = abs(xa - xb);

      if (eror < tol)
      {
        break;
      }
      cout << "   " << i + 1 << "\t   " << xa << "\t   " << xb << "\t   " << xc << "\t   " << fxa << "\t   " << fxb << "\t   " << fxc << "\t   " << eror << fixed << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    cout << "Jadi Akar dari persamaan adalah : 2x^2+3x-4=0 \n";
    cout << "Akar : " << xc << endl;
  }
  else
  {
    cout << "tidak ada akar";
  }

  return 0;
}
