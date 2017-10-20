#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float squareRoot(float num,float ans,float tol){
	float check=ans*ans-num;
	if(check<0){
		if(check*(-1)<=tol){
			return ans;
		}
		else{
			squareRoot(num,(ans*ans+num)/(2*ans),tol);
		}
	}
	else{
		if(check<=tol){
			return ans;
		}
		else{
			squareRoot(num,(ans*ans+num)/(2*ans),tol);
		}
	}
}
int main(int argc, char** argv) {
	float num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"\nSquare root="<<squareRoot(num,1,0.01);
	return 0;
}
