#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Data
{
  int data_x;
  int data_y;
};


int main()
{
  system("cls");
  int n, korelasi;
  int sigmax, sigmay, sigmaxy;
  float sigmax2, sigmay2, a, b, c;
  double koefisien;

  cout << "Inputkan Jumlah n: ";
  cin >> n;
  double data_xy[n];
  cout << endl;

  Data dta[n];
  vector<Data> dataa;
  for (int i = 0; i < n; i++)
  {
    Data data;
    cout << "Input data X ke-" << i + 1 << " : ";
    cin >> dta[i].data_x;
    cout << endl;
    while (dta[i].data_x <= 0) {
            cout << "Nilai x tidak boleh kurang dari 0 !!. Input Nilai x: ";
            cin >> dta[i].data_x;
            
    }
    cout << "Input data Y ke-" << i + 1 << " : ";
    cin >> dta[i].data_y;
    cout << endl;
    while (dta[i].data_y <= 0) {
            cout << "Nilai y tidak boleh kurang dari 0 !!. Input Nilai y: ";
            cin >> dta[i].data_y;
            cout << endl;
    }
    dataa.push_back(data);

    sigmax += dta[i].data_x;
    sigmay += dta[i].data_y;

    data_xy[i] = dta[i].data_x * dta[i].data_y;
    sigmaxy += data_xy[i];

    
  }
  sigmax2 = pow(sigmax, 2);
  sigmay2 = pow(sigmay, 2);



  a = (n * sigmaxy) - (sigmax * sigmay);
  b = sqrt((n * sigmax2) - (pow(sigmax, 2)));
  c = sqrt((n * sigmay2) - (pow(sigmay, 2)));

  double r = a / (b * c);
  koefisien = pow(r, 2) * (1 / 100);
 

    cout << endl;
    
  cout << "sigma x = " << sigmax << endl;
  cout << "sigma y = " << sigmay << endl;
  cout << "sigma XY = " << sigmaxy << endl;
  cout << "sigma x2 = " << sigmax2 << endl;
  cout << "sigma Y2 = " << sigmay2 << endl;

    cout << endl;

  cout << "a. Nilai Korelasi r = " << a << " / " << b * c << " = " << r << endl;
  cout << "b. Nilai koefisien determinasi = " << koefisien << endl;

if (r<=0.09)
 {
 cout << "c. Hubungan korelasi diabaikan"; 
 }
 else if (r<=0.29)
 {
 cout << "c. Hubungan Korelasi rendah"; 
 }
 else if (r<=0.49)
 {
 cout << "c. Hubungan Korelasi moderat"; 
 }
 else if (r<=0.70)
 {
 cout << "c. Hubungan korelasi sedang"; 
 }
 else if (r>0.70)
 {
    cout << "c. Hubungan Korelasi sangat kuat"; 
 }



    cout << endl;

  if (r == 0)
  {
    cout << "f. Tidak Ada Hubungan Antara variabel X dan Y adalah Positif" << endl;
  }
  else if (r > 0)
  {
    cout << "d. Hubungan Antara variabel X dan Y adalah Positif" << endl;
  }
  else if (r < 0)
  {
    cout << "e. Hubungan Antara variabel X dan Y adalah Negatif" << endl;
  }

  return 0;
}
