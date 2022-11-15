#include <iostream>
using namespace std;
int main()
{
  int pixel;

  cout << "Input Nilai Pixel : ";
  cin >> pixel;
  cout << endl;

  if (pixel < 0)
  {
    cout << "Nilai Pixelnya adalah : " << 0 << endl;
  }
  else if (pixel > 255)
  {
    cout << "Nilai Pixelnya adalah : " << 255 << endl;
  }
  else
  {
    cout << "Nilai Pixelnya adalah : " << pixel << endl;
  }

  return 0;
}