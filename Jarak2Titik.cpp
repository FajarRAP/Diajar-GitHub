#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int x1, x2, y1, y2, hasil;
  cout<<"Titik A"<<endl;
  cout<<"Masukkan x1 : ";
  cin>>x1;
  cout<<"Masukkan y1 : ";
  cin>>y1;
  cout<<"Titik B"<<endl;
  cout<<"Masukkan x2 : ";
  cin>>x2;
  cout<<"Masukkan y2 : ";
  cin>>y2;
  
  hasil=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  cout<<"Jarak titik A ("<<x1<<","<<y1<<") dan B ("<<x2<<","<<y2<<") adalah "<<hasil<<endl;
  return 0;
}
