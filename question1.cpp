#include<iostream>
using namespace std;
int main(){
	int n,m,c=0;
	cin>>n>>m; //taking the values of n x m , rows & columns.
	if(n<m){ //deciding on what to cut first , the rows/columns. If block represents columns
		c=(m-1); // M columns requires (M-1) cuts to make them r x 1 pieces
		c+= (n-1)*m; //for each columns , it takes (N-1) cuts . which results in product of cuts * columns
	} 
	else{ //we'll be cutting rows first in this case.
		c=(n-1); // Similar to the case of if block , where you'll be cutting rows first.
		c+= (m-1)*n; //for each row , it takes (M-1) cuts . which results in product of cuts * rows present.
	}
	cout<<endl<<c<<endl; //printing the cuts required in a new line.
	return 0;
}
