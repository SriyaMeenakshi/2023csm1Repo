#include<bits/stdc++.h>
using namespace std;
int main(){
int i;
cout<<"The loop with break produces output as:\n";
for(i=1;i<=5;i++){
	if(i%3==0)
	break;
	else
	cout<<i<<" ";
}
cout<<"\nThe loop with continue produces output as:\n";
for(i=1;i<=5;i++){
	if(i%3==0)
	continue;
	else
	cout<<i<<" ";
}
return 0;
}
