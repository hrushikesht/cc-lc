#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <algorithm>
using namespace std;
int main(){
	int withdrawal;
	float cash;
	cin>>withdrawal;
	cin>>cash;
	if(withdrawal+.5<=cash){
		if(withdrawal%5==0){
			cash= cash- withdrawal-0.5;
		}
	}
	cout.precision(2);
	cout<<fixed<<cash<<endl;
}