#include <iostream>
using namespace std;

int main()
{
  int jmlkopi, potongan1, potongan2, potongan3, hargaA, hargam1, hargam2, harga, hargamb1, hargamb2, harganm, diskon, diskon1, diskon2, diskon3;
  char member;

  hargaA = 80;
  hargam1 = 75;
  hargam2 = 65;
  harganm = 70;

  cout << "Jumlah foto copy (lembar) : ";
  cin >> jmlkopi;
  cout << "Apakah anda seorang pelanggan (y/t) : ";
  cin >> member;
  cout << endl;

  int harganormal = hargaA * jmlkopi;
  diskon = hargam1 * jmlkopi;
  diskon1 = hargam2 * jmlkopi;
  diskon2 = hargam2 * jmlkopi;
  diskon3 = harganm * jmlkopi;

  if (member == 'y')
  {
    if (jmlkopi < 100)
    {
      cout << "harga normal : " << harganormal << endl;
      cout << "Jumlah Lembar : " << jmlkopi << endl;
      cout << "Potongan Sebesar : " << harganormal - diskon << endl;
      cout << "Total Yang dibayar : " << hargam1 * jmlkopi << endl;
    }
    else
    {
      cout << "harga normal : " << harganormal << endl;
      cout << "Jumlah Lembar : " << jmlkopi << endl;
      cout << "Potongan Sebesar : " << harganormal - diskon1 << endl;
      cout << "Total Yang dibayar : " << hargam2 * jmlkopi << endl;
    }
  }
  else
  {
    if (jmlkopi >= 200)
    {
      cout << "harga normal : " << harganormal << endl;
      cout << "Jumlah Lembar : " << jmlkopi << endl;
      cout << "Potongan Sebesar : " << harganormal - diskon2 << endl;
      cout << "Total Yang dibayar : " << harganm * jmlkopi << endl;
    }
    else
    {

      cout << "Jumlah Lembar : " << jmlkopi << endl;
      cout << "Potongan Sebesar : " << harganormal - harganormal << endl;
      cout << "Total Yang dibayar : " << harganormal << endl;
    }
  }

  return 0;
}