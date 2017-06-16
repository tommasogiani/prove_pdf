#include<iostream>
#include "LHAPDF/LHAPDF.h"

using namespace std;

int main(){

LHAPDF::PDF* p = LHAPDF::mkPDF("CT10nlo");
cout << "culo "<< " " << p->xfxQ(21, 1e-4, 100.)<< endl;
delete p;

return 0;

}
