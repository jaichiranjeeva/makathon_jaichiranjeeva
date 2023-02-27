#include <iostream>
#include <math.h>
using namespace std;

void cases(){
	int n,pc=0;
	cin>>n;
	pc=1; //selecting all white beads for n length is possible for any case
	int i=0;
	while(ceil(i/2)<ceil(n/2)){ //dealing with only beads where min hlaf of them are white
		pc+=(n-i);  // calculating the possible combinations of prime sub sequential whites
		++i;
	}
	pc-=(n-i+1); //decreasing the unwanted count
	cout<<pc<<endl; //outputting the final result
}

int main(){
	int t;
	cin>>t;
	while(t--)
		cases();
	return 0;
}
