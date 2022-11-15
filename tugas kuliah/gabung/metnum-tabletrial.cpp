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
  float a, b, N, h, r;
  float c_akar[500], n_fungsi[500];
  cout << "Input batas atas : ";
  cin >> a;
  cout << "Input batas bawah : ";
  cin >> b;
  cout << "Input Jumlah iterasi : ";
  cin >> N;

  h = (a - b) / N;
  for (int i = 0; i < N; i++)
  {
    c_akar[i] = b + i * h;
    n_fungsi[i] = f(c_akar[i]);

    cout << c_akar[i] << "\t" << n_fungsi[i] << endl;
  }

  for (int j = 0; j < N - 1; j++)
  {
    if (n_fungsi[j] == 0)
    {
      cout << "Akar: " << c_akar[j] << "\t"
           << "Nilai Fungsi: " << n_fungsi[j] << "Eror: " << abs(n_fungsi[j]) << fixed;
    }
    else
    {
      r = n_fungsi[j] * n_fungsi[j + 1];
      if (r < 0)
      {
        if (abs(n_fungsi[j] < abs(n_fungsi[j + 1])))
        {
          cout << "Akar: " << c_akar[j] << "\t"
               << "Nilai Fungsi: " << n_fungsi[j] << "Eror: " << abs(n_fungsi[j]) << fixed;
        }
        else
        {
          cout << "Akar: " << c_akar[j + 1] << "\t"
               << "Nilai Fungsi: " << n_fungsi[j + 1] << "Eror: " << abs(n_fungsi[j + 1]) << fixed;
        }
      }
    }
  }

  return 0;
}
