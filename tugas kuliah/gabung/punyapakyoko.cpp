#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Suatu toko fotocopy berusaha meningkatkan layanan  dengan pola sebagai berikut: */
/* a.	Jika seseorang yang ingin fotocopy sudah terdaftar sebagai  pelanggan
 * maka akan mendapat potongan harga/lembar copy-  nya Rp. 75
 * untuk jumlah copy kurang dari 100 lembar dan bila  lebih dari atau sama dengan 100
 * lembar diberikan potongan  harga/lembar copynya Rp. 65, untuk
 * harga normal  perlembar/copynya Rp. 80. */
/* b.	Jika seseorang belum terdaftar sebagai pelanggan maka akan  mendapat potongan
 * harga/lembar copynya Rp. 70 untuk jumlah  copy lebih dari atau sama dengan
 * 200 lembar. */
/* c.	Hasil keluaran berupa jumlah lembar copynya,
 * besar potongan  harga yang diperoleh dan jumlah bayarnya. */
/* Selesaikan permasalahan ini dengan menuliskan pseucodenya */

int main()
{
  bool isMember;
  int hargaCopy = 80;
  int diskon = 0;
  int jumlahCopy;

  cout << "Apakah anda member? (1/0): ";
  cin >> isMember;

  cout << "Masukkan jumlah copy (lembar) : ";
  cin >> jumlahCopy;

  int hargaNormal = jumlahCopy * hargaCopy;

  if (isMember)
  {
    if (jumlahCopy < 100)
    {
      hargaCopy = 75;
    }
    else
    {
      hargaCopy = 65;
    }
  }
  else
  {
    if (jumlahCopy > 200)
    {
      hargaCopy = 70;
    }
  }

  int totalHarga = jumlahCopy * hargaCopy;

  cout << hargaCopy << endl;

  cout << "Jumlah Copy: " << jumlahCopy << endl;
  cout << "Potongan Harga : " << hargaNormal - totalHarga << endl;
  cout << "Yang Harus Dibayar : " << totalHarga << endl;

  return 0;
}