#include <iostream>
using namespace std;
void authentic()
{
    cout << "News is Authentic";
}
void timestamp()
{
    cout << "News is Authentic";
}
void standards()
{
    cout << "News is Authentic";
}
void author()
{
	cout<< "News is Authentic";
}
void resource()
{
	cout<<"News is Authentic";
}
	
int main()
{
  int n;
  
  cout<<"1. Reliable source\n";
  cout<<"2. News is upto date\n";
  cout<<"3. Website has good standards\n";
  cout<<"4. Author's sign at the end of news\n";
  cout<<"5. Resources attatched\n";
  cout<<"6. Exit\n";
  cout<<"Selection: ";
  cin>> n;
  switch ( n ) {
  case 1:
    authentic();
    break;
  case 2: 
    timestamp();
    break;
  case 3: 
    standards();
    break;
  case 4:
  	author();
  	break;
  case 5:
  	resource();
  	break;
  case 6:
    cout<<"Thank You for using our service\n";
    break;
  default:
    cout<<"This is a Fake News\n";
    break;
  }
  cin.get();
}
