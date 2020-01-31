#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
cout << "press Enter 3 times to reveal your future\n";
cin.get(),cin.get(),cin.get();
srand(time(0));
int x=rand()%9;
if(x==0) cout << "You will get A in this 261102.\n";
else if(x==1) cout <<"You will get B+ in this 261102.\n";
else if(x==2) cout <<"You will get B in this 261102.\n"; 
else if(x==3) cout <<"You will get C+ in this 261102.\n";
else if(x==4) cout <<"You will get C in this 261102.\n"; 
else if(x==5) cout <<"You will get D+ in this 261102.\n"; 
else if(x==6) cout <<"You will get D in this 261102.\n";
else if(x==7) cout <<"You will get F in this 261102.\n";
else if(x==8) cout <<"You will get W in this 261102.\n";
return 0;

}
