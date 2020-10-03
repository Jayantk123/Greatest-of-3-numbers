#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c){
if(a>b && a>c )
return a;
else if(b>a && b>c)
return b;
else
return c;

}

int main() {
int a, b, c;
cin>>a>>b>>c;
int ans = max_of_three(a, b, c);
cout<<ans;

return 0;
}
