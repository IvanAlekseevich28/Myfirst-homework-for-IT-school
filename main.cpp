#include <QCoreApplication>
#include "compressed.h"
#include "dectobin.h"
#include <iostream>

using namespace std;
typedef unsigned short us;

int main()
{
  us day, mounth, year;

  cout << "Enter date:" << endl;
  cout << "Day: ";
  cin >> day;
  cout << endl << "Mounth: ";
  cin >> mounth;
  cout << endl << "year: ";
  cin >> year;
  cout << endl << endl;
  us compressed = dataCompress(day, mounth, year);
  DECtoBIN(compressed);
  cout << endl<< compressed << endl << "Uncompressed date:" << endl;
  day = mounth = year = 0;
  dataExtract(compressed, day, mounth, year);
  cout << "Day: " << day << endl;
  cout << "Mounth: " << mounth << endl;
  cout << "Year: " << year << endl;

    return 0;
}
