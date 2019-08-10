#include <iostream>
#include<iomanip>
using namespace std;
int r(int i,int p)
{
int s=0;
p=100-p;
while(i>0)
{
 s=s+i;
 i=(i*p)/100;
        
}
return s;
}
int main() {
	int i;
	int p;
	cin>>i>>p;
	cout<<r(i,p);

		return 0;
}