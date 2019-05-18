#include <iostream>
#include <iomanip>

using namespace std;

int main() {
double x, va, vb;
cin>>x>>va>>vb;
double ans;
ans=(2*x)/(va-vb);
if(va>vb || (va==vb && x==0))
cout<<fixed<<setprecision(6)<<ans;
else{
cout<<"-1";
}
}
